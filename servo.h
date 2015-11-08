#ifndef SERVO_H
#define SERVO_H

class Servo{
public:
	Servo();
	void rotateCW(int degrees);
	void rotateCCW(int degrees);
private:
	int currentAngle;

};


#endif