// cc -o swled swled.c -lwiringPi
#include <stdio.h>
#include <wiringPi.h>
int main(int argc, char *argv[]) {
  
	unsigned char sw;
	unsigned char led0 , led1;
  
	wiringPiSetup();
	pinMode(15,OUTPUT);
	pinMode(16,OUTPUT);
	pinMode(1,OUTPUT);
	pinMode(4,OUTPUT);
	pinMode(5,OUTPUT);
	pinMode(6,OUTPUT);
	pinMode(10,OUTPUT);
	pinMode(11,OUTPUT);
	pinMode(31,OUTPUT);
	pinMode(27,OUTPUT);
	pinMode(26,OUTPUT);
	pinMode(27,OUTPUT);
	pinMode(28,OUTPUT);
	pinMode(29,OUTPUT);
	pinMode(7,OUTPUT);
	pinMode(0,OUTPUT);
	pinMode(2,OUTPUT);
	pinMode(3,OUTPUT);
	pinMode(12,OUTPUT);
	pinMode(13,OUTPUT);
	pinMode(14,OUTPUT);
	pinMode(30,OUTPUT);
	pinMode(21,OUTPUT);
	pinMode(22,OUTPUT);
	pinMode(23,OUTPUT);
	pinMode(24,OUTPUT);
	pinMode(25,OUTPUT);

	while (1) {
		digitalWrite(15,HIGH);
		digitalWrite(16,HIGH);
		digitalWrite(1,HIGH);
		digitalWrite(4,HIGH);
		digitalWrite(5,HIGH);
		digitalWrite(6,HIGH);
		digitalWrite(10,HIGH);
		digitalWrite(11,HIGH);
		digitalWrite(31,HIGH);
		digitalWrite(26,HIGH);
		digitalWrite(27,HIGH);
		digitalWrite(28,HIGH);
		digitalWrite(29,HIGH);
		digitalWrite(7,HIGH);
		digitalWrite(0,HIGH);
		digitalWrite(2,HIGH);
		digitalWrite(3,HIGH);
		digitalWrite(12,HIGH);
		digitalWrite(13,HIGH);
		digitalWrite(14,HIGH);
		digitalWrite(30,HIGH);
		digitalWrite(21,HIGH);
		digitalWrite(22,HIGH);
		digitalWrite(23,HIGH);
		digitalWrite(24,HIGH);
		digitalWrite(25,HIGH);
		delay(500);
		digitalWrite(15,LOW);
		digitalWrite(16,LOW);
		digitalWrite(1,LOW);
		digitalWrite(4,LOW);
		digitalWrite(5,LOW);
		digitalWrite(6,LOW);
		digitalWrite(10,LOW);
		digitalWrite(11,LOW);
		digitalWrite(31,LOW);
		digitalWrite(26,LOW);
		digitalWrite(27,LOW);
		digitalWrite(28,LOW);
		digitalWrite(29,LOW);
		digitalWrite(7,LOW);
		digitalWrite(0,LOW);
		digitalWrite(2,LOW);
		digitalWrite(3,LOW);
		digitalWrite(12,LOW);
		digitalWrite(13,LOW);
		digitalWrite(14,LOW);
		digitalWrite(30,LOW);
		digitalWrite(21,LOW);
		digitalWrite(22,LOW);
		digitalWrite(23,LOW);
		digitalWrite(24,LOW);
		digitalWrite(25,LOW);
		delay(500);
	}
 
  return 0;
}
