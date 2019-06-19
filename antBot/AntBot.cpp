#include <AntBot.h>
#include <LineFollower.h>
#include <Ultrasonic.h>

LineFollower lineFollower("A");
Ultrasonic ultrasonic;

AntBot::AntBot(boolean reverse) {
	isReversed = reverse;
	if(reverse){
		PORTD &= ~(1<<PD4);
		PORTD |= (1<<PD7);
	}else{
		PORTD |= (1<<PD4);
		PORTD &= ~(1<<PD7);
	}
	pinMode(5, OUTPUT);
	pinMode(6, OUTPUT);
}

void AntBot::stop() {
	analogWrite(5,0);
	analogWrite(6,0);
}

void AntBot::fullForward() {
	PORTD |= (1<<PD4);
	analogWrite(5,255);
	PORTD &= ~(1<<PD7);
	analogWrite(6,255);
}

void AntBot::fullReverse() {
	PORTD &= ~(1<<PD4);
	analogWrite(5,255);
	PORTD |= (1<<PD7);
	analogWrite(6,255);
}

void AntBot::forwardSpeed(int speed) {
	PORTD |= (1<<PD4);
	analogWrite(5,speed);
	PORTD &= ~(1<<PD7);
	analogWrite(6,speed);
}

void AntBot::reverseSpeed(int speed) {
	PORTD &= ~(1<<PD4);
	analogWrite(5,speed);
	PORTD |= (1<<PD7);
	analogWrite(6,speed);
}

