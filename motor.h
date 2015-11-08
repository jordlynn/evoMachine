#ifndef MOTOR_H
#define MOTOR_H

class Motor{
public:
	Motor();
	void TurnOn();
	void TurnOff();
	int GetStatus();
private:
	int status;
};


#endif