#ifndef antBot_h
#define	antBot_h

#include <Arduino.h>
#include <Servo.h>

#define motorPWMR 4
#define motorDR	5
#define motorPWML 7
#define motorDL	6
#define buzzer 8
/*
#define FORWARD       2000
#define HOLD_OFF_TIME 8
*/
class antBot
{
private:
	boolean isReversed;
	
public:
	antBot(boolean reverse);
	void begin();
	void stop();
	void fullForward();
	void fullReverse();
	void forwardSpeed(int speed);
	void reverseSpeed(int speed);
	/*
	void rampToSpeed(int speed);
	void moveAtSpeed(int speed);
	void forwardAtSpeed(int speed);
	void reverseAtSpeed(int speed);
	*/
};

#endif