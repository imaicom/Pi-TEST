#include <stdio.h>
#include <wiringPi.h>

main() {
	
	wiringPiSetup();
	
	pinMode( 2,OUTPUT);	// a
	pinMode( 0,OUTPUT);	// b
	pinMode(22,OUTPUT);	// c
	pinMode(23,OUTPUT);	// d
	pinMode(24,OUTPUT);	// e
	pinMode( 3,OUTPUT);	// f
	pinMode(14,OUTPUT);	// g
	pinMode(21,OUTPUT);	// h
	pinMode(13,OUTPUT);	// Left  K
	pinMode(12,OUTPUT);	// Right K
   
	while(1) {
		digitalWrite( 2 ,0); // a
		digitalWrite( 0 ,0); // b
		digitalWrite(22 ,0); // c
		digitalWrite(23 ,0); // d
		digitalWrite(24 ,0); // e
		digitalWrite( 3 ,0); // f
		digitalWrite(14 ,0); // g
		digitalWrite(21 ,0); // h
		digitalWrite(13 ,0); // Left  K
		digitalWrite(12 ,0); // Right K
		
		digitalWrite( 2 ,1); // a
		digitalWrite(12 ,1); // Right K
		delay(1000);
		
		digitalWrite( 2 ,0); // a
		digitalWrite( 0 ,1); // b		
		delay(1000);
		
		digitalWrite( 0 ,0); // b		
		digitalWrite(22 ,1); // c
		delay(1000);
		
		digitalWrite(22 ,0); // c
		digitalWrite(23 ,1); // d
		delay(1000);
		
	}
}
