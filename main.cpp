#include <wiringPi.h>
#include <iostream>
#include <softPwm.h>
#include "servo.h"
#include "motor.h"

using namespace std;


int main(){
	Servo firstServo;
	Motor mainMotor;
	

	return 0;
}

	/*wiringPiSetup();
	pinMode(M, OUTPUT);
	delay(50);
	cout <<	softPwmCreate(SERVO, 0, 100) << endl;
	delay(10);
	int i = 1;
	while(i){
	if(i < 50){
		cout << i << endl;
		softPwmWrite(SERVO, 29);	
		i++;
		delay(10);
	}else if(i >= 50){
		cout << "back" << endl;
		softPwmWrite(SERVO, 2);
		i++;
		delay(10);
		if(i > 90){
			softPwmWrite(SERVO, 0);
			delay(1000);	
			i=1;
		}
	}
	}*/
