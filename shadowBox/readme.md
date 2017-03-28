#Midterm Project: Shadow Box Night Light

For my midterm project, I wanted to play with light and shadow, and create something that I wouldn't mind displaying in my own home. With that in mind, I decided to pursue a night light that would turn on when it got dark enough in a room and project a sort of scenery using shadows.

I first focused on the physical aspects of the project; the housing for the arduino/hardware and the paper cutout. I purchased a foam core board and posterboard from an art supply store and got to work with my xacto knife. I initially created a large box with a folding top to focus the light but then realized that the design wouldnt quite work. 

Back to the drawing board, I created a more compact housing that the arduino fit in snugly. I cut out holes for the USB cord, the photoresistor, and LED. The box itself was streamlined but was not super practical for transporting the light as I had to remove the arduino from the box and had trouble refitting the photoresistor into the hole. 

![51236437647__225456db-0d51-455d-88e5-f2e50daff3ce jpg](https://cloud.githubusercontent.com/assets/21225594/24387944/09acf3d2-1346-11e7-9232-3f4c4d0d9326.jpeg)

Next I created a scene that I wanted to project from the Hayao Miyazaki movie, Tonari no Totoro. I initially drew out a sketch in Illustrator and printed it out but had some trouble making precise cuts on the chosen paper medium. Watercolor paper would have probably been a more feasible choice. Additionally, I noticed that the limited brightness of the LED did not project minute details in the cutout very well. I eventually decided on a simpler design that I freehanded. 

![51236494379__d3427ece-c90d-4d2e-8c5f-6a75697b9e60](https://cloud.githubusercontent.com/assets/21225594/24388125/a57ac9c4-1346-11e7-9215-812aa8be42dd.jpg)

Now that I had the housing components completed, I worked on the code. I looked around online for some examples that relied on light availability read by the photoresistor and tried a few out (and failed). I found an example that explained everything in terms of light level and decided to try it out. I first created a constant for the photoreceptor and and a constant for the LED (and set it up as an output), then defined the high and low light levels. In the program loop, I made a function "lightLevel" to measure the voltage input from the photoresisor/resistor. The example I followed also manually tuned the range of light to be able to turn the LED completely on and completely off. This was achieved by using the map function to compress the range of 0-1023 in a range of 0-255, and by using the constrain function which makes sure the numbers read in the map function stay within those parameters. Lastly, the autotune function was used to measure, save, and output the light levels being read by the photoresistor. 

![img_1495 jpg](https://cloud.githubusercontent.com/assets/21225594/24387912/da5e8e74-1345-11e7-90bb-1341423c3d6b.jpeg)
![img_1496 jpg-1](https://cloud.githubusercontent.com/assets/21225594/24387913/dea5d4d8-1345-11e7-8219-01d93e4bdf0f.jpeg)
See the setup in action: http://gph.is/2o4xzoY

Once the code, housing, and hardware were ready, I combined them all to make the nightlight. It turned out okay but I think it would greatly benefit from a version 2.0 and some improvements. In class, it was mentioned that it might be better to make an upward projection rather than a forward one, and with that the encasing could probably be more simplistic and elegant. Additionally, I'd build it so that the photoreceptor could easily access the exterior to read the light level easily. Overall I'm happy with the project but think that it could be super awesome with some more work. 

![img_1505 jpg-1](https://cloud.githubusercontent.com/assets/21225594/24388167/d6c2110e-1346-11e7-8161-ded433573b46.jpg)
![img_1507 jpg-1](https://cloud.githubusercontent.com/assets/21225594/24388185/fc5891cc-1346-11e7-8546-27e34bcfb50e.jpg)
![img_1506 jpg-1](https://cloud.githubusercontent.com/assets/21225594/24388201/1809ef24-1347-11e7-91ca-99f49c29c3c1.jpg)

