#pragma systemFile  // eliminates warning for "unreferenced" functions

// Configuration: use port1 for the leftMotor and port10 for the rightMotor.
const tMotor LEFT_MOTOR = port1;
const tMotor RIGHT_MOTOR = port10;

// Functions prototypes
void espera(float tiempo);

// Function to Turn on Point at a certain SPEED during TIME
// Rotation to the right (clockwise) with positive values
// and to the left (counteclockwise) with negative values
void timedPointTurn(signed byte speed = 95, int time)
{
  motor[LEFT_MOTOR] = speed;
  motor[RIGHT_MOTOR] = -speed;
  espera(time);
  motor[LEFT_MOTOR] = motor[RIGHT_MOTOR] = 0;
}

// Function to Turn to the LEFT a certain SPEED during TIME
void timedSwingTurnToLeft(signed byte speed = 95, int time)
{
  motor[LEFT_MOTOR] = 0;
  motor[RIGHT_MOTOR] = abs(speed);
  espera(time);
  motor[LEFT_MOTOR] = motor[RIGHT_MOTOR] = 0;
}


// Function to Turn to the RIGHT a certain SPEED during TIME
void timedSwingTurnToRight(signed byte speed = 95, int time)
{
  motor[LEFT_MOTOR] = abs(speed);
  motor[RIGHT_MOTOR] = 0;
  espera(time);
  motor[LEFT_MOTOR] = motor[RIGHT_MOTOR] = 0;
}

// Function to Go Forward at a certain SPEED during TIME seconds.
// Use a negative speed to go backwards.
void timedGoForward(signed byte speed = 95, int time)
{
  motor[LEFT_MOTOR] = motor[RIGHT_MOTOR] = speed;
  espera(time);
  motor[LEFT_MOTOR] = motor[RIGHT_MOTOR] = 0;
}

// Giro Rapido hace un giro rapido hacia la derecha (sentido de las agujas del reloj)
// o hacia la izquierda (sentido contrario a las agujas del reloj)
// El giro es producido durante el tiempo indicado por time
void giroRapido(signed byte velocidad = 95, int tiempo)
{
  timedPointTurn(velocidad, tiempo);
}

// Avanzar hacia delante (o hacia atras si la velocidad es negativa) por un cierto tiempo
void avanzaTiempo(signed byte velocidad = 95, int tiempo)
{
  timedGoForward(velocidad, tiempo);
}

// Avanza hacia delante con el robot
void avanza(signed byte speed = 95)
{
	motor[LEFT_MOTOR] = motor[RIGHT_MOTOR] = abs(speed);
}

// Retrocede hacia atras con el robot
void retrocede(const short speed = 50)
{
	motor[LEFT_MOTOR] = motor[RIGHT_MOTOR] = abs(speed) * -1;
}

// Giro a la izquierda con Velocidad y Tiempo
void giroIzquierdaTiempo(signed byte velocidad = 95, int tiempo)
{
	timedSwingTurnToLeft(velocidad, tiempo);
}

// Giro a la derecha con Velocidad y Tiempo
void giroDerechaTiempo(signed byte velocidad = 95, int tiempo)
{
	timedSwingTurnToRight(velocidad, tiempo);
}

// Para ambos motores del robot (izquierdo y derecho)
void para()
{
	motor[LEFT_MOTOR] = motor[RIGHT_MOTOR] = 0;
}

// Ajusta motor a una velocidad
void ponMotor(const tMotor motorPort = LEFT_MOTOR, const short speed = 50)
{
	motor[motorPort] = speed;
}

// Espera un tiempo determinado, o 1 segundo si no se indica un valor.
void espera(float tiempo)
{
	sleep(tiempo * 1000.0);
}

// Traducción de la propiedad sensorValue a valor en Español
intrinsic int property(valor, propertySensor, kNumbOfTotalSensors, tSensors);
