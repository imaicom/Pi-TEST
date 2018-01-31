#include <stdio.h>
#include <wiringPi.h>

main() {
	
	wiringPiSetup();
	
	pinMode(30,INPUT);	// GREEN  SW
	pinMode(21,INPUT);	// YELLOW SW
	pinMode(22,INPUT);	// RED    SW
	
	pinMode(23,OUTPUT);	// GREEN  LED
	pinMode(24,OUTPUT);	// YELLOW LED
	pinMode(25,OUTPUT);	// RED    LED
   
    while(1) {
		digitalWrite(23 , digitalRead(30)); // GREEN  TEST
		printf("%d ",digitalRead(30));
		digitalWrite(24 , digitalRead(21)); // YELLOW TEST
		printf("%d ",digitalRead(21));
		digitalWrite(25 , digitalRead(22)); // RED    TEST
		printf("%d \n",digitalRead(22));
	};
}
