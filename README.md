# RobotC-VEX-Bilingual-Commands
Bilingual RobotC template with commands in Spanish and English that made easier to code for the Clawbot and the Testbed. 

This template is preconfigured for the same elements that the Testbed of the POE PLTW program, but only with only two changes:
* it has no flashlight
* motors left and right are connected to motor ports 1 and 10 (you do not need motor controllers!)

This is a work in progress, but you can check in this video how it works!
https://www.youtube.com/watch?v=J2ObpWRXe2s

## HOW TO USE THE SPANISH COMMANDS ON YOUR CODE:

1. Copy and paste the following line of code in your program, between the #pragma block and the main method:

```c
#include "robotx.h"	//Includes the RobotX
```
2. Download and place the robotx.h file on the same folder that your program.

## HOW TO CREATE A NEW PROGRAM IN SPANISH:

1. Download the "ESTemplate.c" and "robotx.h" files and put them on the same folder.
2. Edit ESTemplate.c with your own code.

## DOCUMENTATION

All the code is documented in Spanish and English to make them understandable. Check "robotx.h" for more information.

## TROUBLESHOOTING

* Did you copy the "Template.c" and "Robotx.h" to the same folder?
* Your motors are not working but you do not have any error? Check the motor configuration lines at the beginning of the robotx.h file and change the existing ports by the ones that you are using.
