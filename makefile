all:
	g++ main.cpp servo.cpp motor.cpp -lwiringPi -lpthread -Wall -lm	
