// cc -o allled allled.c -lwiringPi
#include <stdio.h>
#include <wiringPi.h>
int main(int argc, char *argv[]) {
  
	unsigned char sw;
	unsigned char led0 , led1;
  
	wiringPiSetup();
	
	pinMode(7,INPUT);pullUpDnControl(7,PUD_UP);
	pinMode(0,OUTPUT);
	pinMode(2,OUTPUT);
	pinMode(3,OUTPUT);
	pinMode(12,OUTPUT);
	pinMode(13,OUTPUT);
	pinMode(14,OUTPUT);
	pinMode(30,INPUT);pullUpDnControl(30,PUD_UP);
	pinMode(21,INPUT);pullUpDnControl(21,PUD_UP);
	pinMode(22,INPUT);pullUpDnControl(22,PUD_UP);
	pinMode(23,OUTPUT);
	pinMode(24,OUTPUT);
	pinMode(25,OUTPUT);
	
	pinMode(15,INPUT);pullUpDnControl(15,PUD_UP);
	pinMode(16,OUTPUT);
	pinMode(1,OUTPUT);
	pinMode(4,OUTPUT);
	pinMode(5,OUTPUT);
	pinMode(6,OUTPUT);
	pinMode(10,INPUT);pullUpDnControl(10,PUD_UP);
	pinMode(11,INPUT);pullUpDnControl(11,PUD_UP);
	pinMode(31,INPUT);pullUpDnControl(31,PUD_UP);
	pinMode(26,OUTPUT);
	pinMode(27,OUTPUT);
	pinMode(28,OUTPUT);
	pinMode(29,OUTPUT);

	while (1) {
		
		digitalRead(7);
		digitalWrite(0,HIGH);
		digitalWrite(2,HIGH);
		digitalWrite(3,HIGH);
		digitalWrite(12,HIGH);
		digitalWrite(13,HIGH);
		digitalWrite(14,HIGH);
		digitalRead(30);
		digitalRead(21);
		digitalRead(22);
		digitalWrite(23,HIGH);
		digitalWrite(24,HIGH);
		digitalWrite(25,HIGH);
		
		digitalRead(15);
		digitalWrite(16,HIGH);
		digitalWrite(1,HIGH);
		digitalWrite(4,HIGH);
		digitalWrite(5,HIGH);
		digitalWrite(6,HIGH);
		digitalRead(10);
		digitalRead(11);
		digitalRead(31);
		digitalWrite(26,HIGH);
		digitalWrite(27,HIGH);
		digitalWrite(28,HIGH);
		digitalWrite(29,HIGH);

		delay(500);
		
		digitalRead(7);
		digitalWrite(0,LOW);
		digitalWrite(2,LOW);
		digitalWrite(3,LOW);
		digitalWrite(12,LOW);
		digitalWrite(13,LOW);
		digitalWrite(14,LOW);
		digitalRead(30);
		digitalRead(21);
		digitalRead(22);
		digitalWrite(23,LOW);
		digitalWrite(24,LOW);
		digitalWrite(25,LOW);
		
		digitalRead(15);
		digitalWrite(16,LOW);
		digitalWrite(1,LOW);
		digitalWrite(4,LOW);
		digitalWrite(5,LOW);
		digitalWrite(6,LOW);
		digitalRead(10);
		digitalRead(11);
		digitalRead(31);
		digitalWrite(26,LOW);
		digitalWrite(27,LOW);
		digitalWrite(28,LOW);
		digitalWrite(29,LOW);

		delay(500);
	}
 
  return 0;
}
