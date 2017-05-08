# Final Project: Color Sensor-o-meter

For my final project, I wanted to create something that had useful purpose. 

We live in a society that is stuck on designing for the majority, not realizing that there is often a group of people who will not have the luxury of using a product or service because of its exclusive nature. I wanted to make something that would inspire others to think about design in terms of form and function, but also in terms of inlcusivity. This is an attempt to work toward a stance that designs for all from the start, rather than designing for some then trying to adjust for all.

Something that many people take for granted is the luxuries provided by having even "okay" vision. Those who are blind or visually impaired struggle with identifying color. I decided to make a device that would identify color using a sensor, transfer the data to a servo, and point to a color on a wheel marked with braille. Ideally, the device would have implemented voice output instead of using a servo (not everyone with a visual impairment reads braille), but I thought I'd start simple. 

### Components:
#### the color sensor (ColorPAL 28380)
![img_0047 jpg](https://cloud.githubusercontent.com/assets/21225594/25784041/bc628862-3334-11e7-9ea5-f5aa4f938f11.jpeg)

#### the servo motor (Tower Pro SG-5010)
![img_0046 jpg](https://cloud.githubusercontent.com/assets/21225594/25784054/09259b9e-3335-11e7-94b1-5c85212959cb.jpeg)

#### the Arduino
![img_0045 jpg](https://cloud.githubusercontent.com/assets/21225594/25784056/1cb686be-3335-11e7-96a0-cb59fef06f02.jpeg)

#### the housing
![51587619359__52628411-0105-4002-a344-8a65151ee919 jpg](https://cloud.githubusercontent.com/assets/21225594/25784069/80598eb4-3335-11e7-9877-89358f6694bf.jpeg)

### Process
I had to figure out my housing element for the reader, and among other ideas, just ended up putting it in a box. I cut a hole on the side to fit the color sensor, as well as a hole on the top for the servo motor arrow. Once I had the placement of everything done, I spraypainted the box with black paint, cut out color strips for the color wheel/glued them on, and cut out an arrow. For the braille component, I used small pushpins and wrote out the first letter of every color onto each color stop of the wheel (but since blue and black both start with "b", black is labeled "bb).
![img_0048 jpg](https://cloud.githubusercontent.com/assets/21225594/25789389/593c93c8-337e-11e7-92f5-afb391a31d75.jpeg)

![img_0049 jpg](https://cloud.githubusercontent.com/assets/21225594/25789430/94fe0c52-337e-11e7-8964-cbff0f129607.jpeg)

![img_0050 jpg](https://cloud.githubusercontent.com/assets/21225594/25789437/a3c6eee8-337e-11e7-82fd-283c2dd81260.jpeg)

Next was getting the color sensor to read RGB values. Luckily, ColorPAL supplies some (though VERY limited) [documentation](http://forums.parallax.com/discussion/138612/colorpal-arduino-problem) for working with the Arduino. I loaded the code into my program and adjusted accordingly, though I will confess that much of the code was unclear and confusing to me. I used the serial monitor to troubleshoot the sensor readings. 

The next step was to add the servo motor to the mix, and have it communicate with the sensor. I wired up the servo motor, included the Arduino servo library, and got it to work...but not quite in conjunction with the sensor. I spent hours upon hours trying to figure out how to communicate between the sensor and the servo but couldn't figure it out. I think I may have just been in over my head for this project. I don't understand nearly enough programming to make it work and really just ended many days completely frustrated and more confused. 

