#pragma systemFile  // eliminates warning for "unreferenced" functions

// CONFIGURACIÓN DE MOTORES: Pon los mismos que en la configuración de tu programa.
// MOTOR CONFIGURATION: Use the same setup that the one of your program.
const tMotor LEFT_MOTOR = port1;
const tMotor RIGHT_MOTOR = port10;

// EXTRA FUNCTIONS IN SPANISH ----------------------------------------------------

// Espera un tiempo determinado, equivale al comando WAIT en NL.
void espera(float tiempo)
{
	sleep(tiempo * 1000.0);
}

// Giro Rapido hace un giro rapido hacia la derecha (VELOCIDAD positiva)
// o hacia la izquierda (VELOCIDAD negativa) durante un cierto TIEMPO
void giroRapido(signed byte velocidad = 95, int tiempo)
{
  motor[LEFT_MOTOR] = velocidad;
  motor[RIGHT_MOTOR] = -velocidad;
  espera(tiempo);
  motor[LEFT_MOTOR] = motor[RIGHT_MOTOR] = 0;
}

// Giro a la izquierda con VELOCIDAD y TIEMPO indicados.
void giroIzquierdaTiempo(signed byte velocidad = 95, int tiempo)
{
	motor[LEFT_MOTOR] = 0;
  motor[RIGHT_MOTOR] = abs(velocidad);
  espera(tiempo);
  motor[LEFT_MOTOR] = motor[RIGHT_MOTOR] = 0;
}

// Giro a la derecha con VELOCIDAD y TIEMPO indicados.
void giroDerechaTiempo(signed byte velocidad = 95, int tiempo)
{
	motor[LEFT_MOTOR] = abs(velocidad);
  motor[RIGHT_MOTOR] = 0;
  espera(tiempo);
  motor[LEFT_MOTOR] = motor[RIGHT_MOTOR] = 0;
}

// Avanzar hacia delante (VELOCIDAD positiva) o hacia atrás (VELOCIDAD negativa) durante TIEMPO
void avanzaTiempo(signed byte velocidad = 95, int tiempo)
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
void retrocede(const short speed = 50)
{
	motor[LEFT_MOTOR] = motor[RIGHT_MOTOR] = abs(speed) * -1;
}

// Para los motores izquierdo y derecho
void para()
{
	motor[LEFT_MOTOR] = motor[RIGHT_MOTOR] = 0;
}

// Ajusta el valor de VELOCIDAD de un MOTOR
void ponMotor(const tMotor motorPort = LEFT_MOTOR, const short velocidad = 50)
{
	motor[motorPort] = velocidad;
}

// Traducción de la propiedad sensorValue a valor en Español
intrinsic int property(valor, propertySensor, kNumbOfTotalSensors, tSensors);

// EXTRA FUNCTIONS IN ENGLISH --------------------------------------------------------

// Function to Turn on Point at a certain SPEED during TIME
// Rotation to the right (clockwise) with positive values
// and to the left (counteclockwise) with negative values
void timedPointTurn(signed byte speed = 95, int time)
{
  giroRapido(speed, time);
}

// Function to Turn to the LEFT a certain SPEED during TIME
void timedSwingTurnToLeft(signed byte speed = 95, int time)
{
	giroIzquierdaTiempo(speed, time);
}

// Function to Turn to the RIGHT a certain SPEED during TIME
void timedSwingTurnToRight(signed byte speed = 95, int time)
{
	giroDerechaTiempo(speed, time);
}

// Function to Go Forward at a certain SPEED during TIME.
// Use a negative speed to go backwards.
void timedGoForward(signed byte speed = 95, int time)
{
	avanzaTiempo(speed, time);
}
