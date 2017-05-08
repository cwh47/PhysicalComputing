#include <SoftwareSerial.h>
#include <Servo.h>
const int sio = 3;      // ColorPAL connected to pin 3
const int unused = 255;     // Non-existant pin # for SoftwareSerial
const int sioBaud = 4800;
const int waitDelay = 200;
const int redPos = 30;
const int greenPos = 90;
const int bluePos = 105;


// Received RGB values from ColorPAL
int red;
int grn;
int blu;
// Set up two software serials on the same pin.
SoftwareSerial serin(sio, unused);
SoftwareSerial serout(unused, sio);

Servo myServo;

void setup() {
  Serial.begin(9600);
  reset();          // Send reset to ColorPal
  serout.begin(sioBaud);
  pinMode(sio, OUTPUT);
  serout.print("= (00 $ m) !"); // Loop print values, see ColorPAL documentation
  serout.end();       // Discontinue serial port for transmitting

  serin.begin(sioBaud);         // Set up serial port for receiving
  pinMode(sio, INPUT);

  myServo.attach(9); // Set servo as attached to pin 9
  myServo.write(0);
  delay(1000);
  Serial.println("test");

}

void loop() {
  float average, r, g, b;
  readData();
  average = (red + grn + blu) / 3;
  r = red / average;
  g = grn / average;
  b = blu / average;

  if ((r > 1.4) && (g < 0.9) && (b < 0.9)) {
    Serial.println("red");
    myServo.write(redPos);
  }
  else if ((r < 0.95) && (g > 1.4) && (b < 0.9)) {
    Serial.println("green");
    myServo.write(greenPos);
  }
  else if ((r < 0.8) && (g < 1.2) && (b > 1.2)) {
    Serial.println("blue");
    myServo.write(bluePos);
    }

    delay(60);
  }

         // Reset ColorPAL; see ColorPAL documentation for sequence
void reset() {
  delay(200);
  pinMode(sio, OUTPUT);
  digitalWrite(sio, LOW);
  pinMode(sio, INPUT);
  while (digitalRead(sio) != HIGH);
  pinMode(sio, OUTPUT);
  digitalWrite(sio, LOW);
  delay(80);
  pinMode(sio, INPUT);
  delay(waitDelay);
}

void readData() {
  char buffer[32];

  if (serin.available() > 0) {
    // Wait for a $ character, then read three 3 digit hex numbers
    buffer[0] = serin.read();
    if (buffer[0] == '$') {
      for (int i = 0; i < 9; i++) {
        while (serin.available() == 0);     // Wait for next input character
        buffer[i] = serin.read();
        if (buffer[i] == '$')               // Return early if $ character encountered
          return;
      }
      parseAndPrint(buffer);
      delay(10);
    }
  }
}

// Parse the hex data into integers
void parseAndPrint(char * data) {
  sscanf (data, "%3x%3x%3x", &red, &grn, &blu);
  char buffer[32];
  sprintf(buffer, "R%4.4d G%4.4d B%4.4d", red, grn, blu);
  Serial.println(buffer);
}
