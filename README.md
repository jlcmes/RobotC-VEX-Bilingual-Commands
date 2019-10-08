# RobotC-VEX-Bilingual-Commands

![My image](https://github.com/pepedeab/RobotC-VEX-Bilingual-Commands/blob/master/img/example.PNG)

# ENGLISH README

Bilingual RobotC EDR template with commands in Spanish and English that makes easy to code for the Clawbot and the Testbed. 

This template is preconfigured with the same elements that the POE PLTW Testbed, but with two improvements to make it cheaper:
* no flashlight (you can always add it after)
* motors left and right are connected to motor ports 1 and 10 (you do not need extra motor controllers anymore!). Note that the leftmotor on 1 needs to be have the color red facing out and the rightmotor on 10 with the red cable facing in).

IMPORTANT: This is a work in progress, but it works, check this video:
https://www.youtube.com/watch?v=J2ObpWRXe2s

## HOW TO USE THE SPANISH COMMANDS ON YOUR CODE:

1. Copy and paste the following line of code in your program, between the #pragma block and the main method:

```c
#include "robotx.h"	//Includes the RobotX
```
2. Download the file "robotx.h" and place it on the same folder that your program.

## HOW TO CREATE A NEW PROGRAM IN SPANISH:

1. Download the files "ESTemplate.c" and "robotx.h" and put them on the same folder.
2. Edit "ESTemplate.c" with your own code.

## DOCUMENTATION

All the code is documented in Spanish and English to make them understandable for everyone. Check "robotx.h" for more information.

## TROUBLESHOOTING

* Did you copy the "Template.c" and "Robotx.h" to the same folder? Make sure that they are on the same folder.
* Your motors are not working? Check the motor configuration, at the beginning of the "robotx.h" file and change the existing ports by the ones that you are using.

## INSTRUCTIONS AND PRESENTATION (WITH VIDEOTUTORIALS!)

https://docs.google.com/presentation/d/1dmZzw7mCKog-bir2zlmEhVjCsTOVamdrr53nH4mBN2k/edit?usp=sharing

# SPANISH README

Comandos en Español para RobotC EDR. Esta preconfigurado para usar los motores izquierdo y derecho en los puertos 1 y 10 respectivamente (Rojo en 1 hacia afuera y Rojo en 10 hacia dentro).

Todavía no está terminado, pero ya puede ver un resultado de como funciona aquí: https://www.youtube.com/watch?v=J2ObpWRXe2s

## CÓMO USAR EN SU PROGRAMA DE ROBOTC:

1. Copie y pegue la siguiente línea de código entre las secciones #pragma y main de su programa:

```c
#include "robotx.h"	//Includes the RobotX
```
2. Descargue robotx.h y guárdelo en la misma carpeta que su programa.

## CÓMO CREAR UN PROGRAMA NUEVO EN ESPAÑOL:

1. Descargue "ESTemplate.c" y "robotx.h" y guárdelos en la misma carpeta.
2. Edite ESTemplate.c y escriba el código que desee.

## DOCUMENTACIÓN

Todo el código está comentado en Inglés y en Español. Abra "robotx.h" para más información.

## SOLUCIÓN DE PROBLEMAS

* Están el template y la librería robotx.h en la misma carpeta?
* Sus motores no se mueven pero no tiene ningún error? Recuerde que los motores están configurados para los puertos 1 y 10, cambie en robotx.h a los puertos que desee.

## INSTRUCCIONES Y PRESENTACION (CON VIDEOTUTORIALES!)

https://docs.google.com/presentation/d/1dmZzw7mCKog-bir2zlmEhVjCsTOVamdrr53nH4mBN2k/edit?usp=sharing
