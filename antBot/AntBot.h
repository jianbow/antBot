#ifndef AntBot_h
#define	AntBot_h

#include <Arduino.h>
#include <LineFollower.h>
#include <Ultrasonic.h>
#include <Servo.h>

#define motorPWMR 4
#define motorDR	5
#define motorPWML 7
#define motorDL	6
#define buzzer 8

class AntBot
{
private:
	boolean isReversed;
	
public:
	LineFollower lineFollower;
	Ultrasonic ultrasonic;
	AntBot(boolean reverse);
	void stop();
	void fullForward();
	void fullReverse();
	void forwardSpeed(int speed);
	void reverseSpeed(int speed);
	
};

#endif