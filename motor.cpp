#include <wiringPi.h>
#include <softPwm.h>
#include <iostream>
#include "motor.h"


#define M 6 // wiringPi pin for motor
using namespace std;

Motor::Motor(){
	wiringPiSetup();
	pinMode(M, OUTPUT);
	status = 0;
}

void Motor::TurnOn(){
	digitalWrite(M, HIGH);
	status =1;
}

void Motor::TurnOff(){
	digitalWrite(M, LOW);
	status =0;
}

int Motor::GetStatus(){
	return status;
}