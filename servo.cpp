#include <wiringPi.h>
#include <softPwm.h>
#include <iostream>
#include "servo.h"

#define SERVO 4 // wiringPi pin for servo

using namespace std;

Servo::Servo(){
	wiringPiSetup();
	cout << softPwmCreate(SERVO, 0, 100) << endl;
	delay(10);
	currentAngle = 0;
}

void Servo::rotateCW(int degrees){
	
	for(int i=0; i < degrees; i++){
		softPwmWrite(SERVO, 29);
		delay(1);
	}

	softPwmWrite(SERVO, 0);
}

void Servo::rotateCCW(int degrees){

	for(int i=0; i < degrees; i++){
		softPwmWrite(SERVO, 2);
		delay(2);
	}
	softPwmWrite(SERVO, 0);
}