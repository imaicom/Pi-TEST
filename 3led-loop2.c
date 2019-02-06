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
		digitalWrite(25 , 0); // RED    OFF
		digitalWrite(23 , 1); // GREEN  ON
		delay(1000);
		digitalWrite(23 , 0); // GREEN  OFF
		digitalWrite(24 , 1); // YELLOW ON
		delay(1000);
		digitalWrite(24 , 0); // YELLOW OFF
		digitalWrite(25 , 1); // RED    ON
		delay(1000);
	};
}
