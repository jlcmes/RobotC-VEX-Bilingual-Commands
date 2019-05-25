#pragma config(Sensor, in1,    sigueLinea,   sensorLineFollower)
#pragma config(Sensor, in2,    regulador,  sensorPotentiometer)
#pragma config(Sensor, in3,    fotosensor,    sensorReflection)
#pragma config(Sensor, dgtl1,  botonFin,    sensorTouch)
#pragma config(Sensor, dgtl2,  boton,     sensorTouch)
#pragma config(Sensor, dgtl3,  cuentavueltas,           sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  sonar,          sensorSONAR_cm)
#pragma config(Sensor, dgtl12, led,          sensorLEDtoVCC)
#pragma config(Motor,  port1,           motorIzquierdo,     tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port8,           linterna,    tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,  port9,           servoMotor,    tmotorServoStandard, openLoop)
#pragma config(Motor,  port10,          motorDerecho,    tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "robotx.h"	//Includes the RobotX

/*
	Project name: Labyrinth Challenge
	Author: Jose Luis Cebrian Marquez (Template) and [your name here!]
	Team members:
	Period:
*/

task main()
{
	// Example in Spanish
	espera(1);		//Espera 1 segundo.
	avanzaTiempo(95, 2);	//Avanza con una velocidad de 95 durante 2 segundos y despues para.
	giroRapido(-50, 1); 	//Giro rapido a izquierda (negativo) durante 1 segundo y despues para.
}