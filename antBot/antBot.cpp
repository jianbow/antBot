#include <antBot.h>

antBot::antBot(boolean reverse) {
	isReversed = false;
}


void antBot::begin() {
	DDRD |= (1<<PD4);
	DDRD |= (1<<PD7);
	pinMode(5,OUTPUT);
	pinMode(6,OUTPUT);
}

void antBot::stop() {
	analogWrite(5,0);
	analogWrite(6,0);
}

void antBot::fullForward() {
	PORTD |= (1<<PD4);
	analogWrite(5,255);
	PORTD &= ~(1<<PD7);
	analogWrite(6,255);
}

void antBot::fullReverse() {
	PORTD &= ~(1<<PD4);
	analogWrite(5,255);
	PORTD |= (1<<PD7);
	analogWrite(6,255);
}

void antBot::forwardSpeed(int speed) {
	PORTD |= (1<<PD4);
	analogWrite(5,speed);
	PORTD &= ~(1<<PD7);
	analogWrite(6,speed);
}

void antBot::reverseSpeed(int speed) {
	PORTD &= ~(1<<PD4);
	analogWrite(5,speed);
	PORTD |= (1<<PD7);
	analogWrite(6,speed);
}
