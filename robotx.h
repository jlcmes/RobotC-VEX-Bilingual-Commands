#pragma systemFile  // eliminates warning for "unreferenced" functions

// CONFIGURACIÓN DE MOTORES: Pon los mismos que en la configuración de tu programa.
// MOTOR CONFIGURATION: Use the same setup that the one of your program.
const tMotor LEFT_MOTOR = port1;
const tMotor RIGHT_MOTOR = port10;
const tMotor SERVO = port9;

// EXTRA FUNCTIONS IN SPANISH ----------------------------------------------------

// Traducción de la propiedad sensorValue a valor en Español
intrinsic int property(valor, propertySensor, kNumbOfTotalSensors, tSensors);

// Espera un tiempo determinado, equivale al comando WAIT en NL.
void espera(float tiempo)
{
	sleep(tiempo * 1000.0);
}

// Giro Rapido hace un giro rapido hacia la derecha (VELOCIDAD positiva)
// o hacia la izquierda (VELOCIDAD negativa) durante un cierto TIEMPO
void giroRapido(signed byte velocidad = 95, float tiempo)
{
  motor[LEFT_MOTOR] = velocidad;
  motor[RIGHT_MOTOR] = -velocidad;
  espera(tiempo);
  motor[LEFT_MOTOR] = motor[RIGHT_MOTOR] = 0;
}

// Giro a la izquierda con VELOCIDAD y TIEMPO indicados.
void giroIzquierdaTiempo(signed byte velocidad = 95, float tiempo)
{
	motor[LEFT_MOTOR] = 0;
  motor[RIGHT_MOTOR] = abs(velocidad);
  espera(tiempo);
  motor[LEFT_MOTOR] = motor[RIGHT_MOTOR] = 0;
}

// Giro a la derecha con VELOCIDAD y TIEMPO indicados.
void giroDerechaTiempo(signed byte velocidad = 95, float tiempo)
{
	motor[LEFT_MOTOR] = abs(velocidad);
  motor[RIGHT_MOTOR] = 0;
  espera(tiempo);
  motor[LEFT_MOTOR] = motor[RIGHT_MOTOR] = 0;
}

// Avanzar hacia delante (VELOCIDAD positiva) o hacia atrás (VELOCIDAD negativa) durante TIEMPO
void avanzaTiempo(signed byte velocidad = 95, float tiempo)
{
  motor[LEFT_MOTOR] = motor[RIGHT_MOTOR] = velocidad;
  espera(tiempo);
  motor[LEFT_MOTOR] = motor[RIGHT_MOTOR] = 0;
}

// Avanza hacia delante (enciende ambos motores)
void avanza(signed byte speed = 95)
{
	motor[LEFT_MOTOR] = motor[RIGHT_MOTOR] = abs(speed);
}

// Avanza hacia atrás (enciende ambos motores)
void retrocede(signed byte speed = 50)
{
	motor[LEFT_MOTOR] = motor[RIGHT_MOTOR] = abs(speed) * -1;
}

// Para los motores izquierdo y derecho
void para()
{
	motor[LEFT_MOTOR] = motor[RIGHT_MOTOR] = 0;
}

// Igual que para, para ambos motores
void paraRobot()
{
	para();
}

// Para un motor que le pasemos como parametro
void paraMotor(tMotor _motor)
{
	motor[_motor] = 0;
}

// Ajusta el valor de VELOCIDAD de un MOTOR
void ponMotor(tMotor _motor = LEFT_MOTOR, signed byte velocidad = 50)
{
	motor[_motor] = velocidad;
}

// Ajusta el valor de un servo a una POSICION
void ponServo(tMotor _servo = SERVO, signed byte posicion = 0)
{
  motor[_servo] = posicion;
}

// Para el programa hasta que se de la condición, que se pulse boton o botonFin
void esperaBoton(tSensors _sensor = dgtl2)
{
	while (valor(_sensor) != 1)	// Mientras no sea 1, esperar y comprobar de nuevo.
	{
		espera(0.001);
	}
}

// Para el programa hasta que se de la condición, que el valor del sensor sea menor que el dado
void esperaValorMenor(tSensors _sensor, int _valor)
{
	// Mientras que no sea menor, esperar y comprobar de nuevo, obviamos el -1
	while ( (valor(_sensor) >= _valor) || (valor(_sensor) == -1) )
	{
		espera(0.001);
	}
}

// Para el programa hasta que se de la condición, que el valor del sensor sea mayor que el dado
void esperaValorMayor(tSensors _sensor, int _valor)
{
	// Mientras que no sea menor, esperar y comprobar de nuevo, obviamos el -1
	while ( (valor(_sensor) <= _valor) )
	{
		espera(0.001);
	}
}

// EXTRA FUNCTIONS IN ENGLISH --------------------------------------------------------

// Function to go forward with the Robot at a certain SPEED
void goForward(signed byte speed = 95)
{
	avanza(speed);
}

// Function to go backwards with the Robot at a certain SPEED
void goBackwards(signed byte speed = 50)
{
	retrocede(speed);	
}

// Function to stop the robot completely (both motors only, left and right)
void stopRobot()
{
	para();
}

// Function to Turn on Point at a certain SPEED during TIME
// Rotation to the right (clockwise) with positive values
// and to the left (counteclockwise) with negative values
void timedPointTurn(signed byte speed = 95, float time)
{
  giroRapido(speed, time);
}

// Function to Turn to the LEFT a certain SPEED during TIME
void timedSwingTurnToLeft(signed byte speed = 95, float time)
{
	giroIzquierdaTiempo(speed, time);
}

// Function to Turn to the RIGHT a certain SPEED during TIME
void timedSwingTurnToRight(signed byte speed = 95, float time)
{
	giroDerechaTiempo(speed, time);
}

// Function to Go Forward at a certain SPEED during TIME.
// Use a negative speed to go backwards.
void timedGoForward(signed byte speed = 95, float time)
{
	avanzaTiempo(speed, time);
}

// Function that waits until the botton is pressed, is similar to
// untilBump and untilTouch of NL but it works for bumps and limitswitches
void untilButton(tSensors _sensor = dgtl2)
{
	esperaBoton(_sensor);
}

// Function that waits until the value of a sensor is less than
// a certain value. It skips the -1 value from the untrasonic sensor
void untilValueLessThan(tSensors _sensor, int value)
{
	esperaValorMenor(_sensor, value);
}

// Function that waits until the value of a sensor is greater than
// a certain value.
void untilValueGreaterThan(tSensors _sensor, int value)
{
	esperaValorMayor(_sensor, value);
}
