// cc -o allled2 allled2.c -lwiringPi
#include <stdio.h>
#include <wiringPi.h>

const int pn[] = { 7,0,2,3,12,13,14,30,21,22,23,24,25,15,16,1,4,5,6,10,11,31,26,27,28,29 };
const int pt[] = { 1,0,0,0,0,0,0,1,1,1,0,0,0,1,0,0,0,0,0,1,1,1,0,0,0,0 };

void portSet(void) {
	
	int i;
	for (i=0; i< 26; i++) {
		if (pt[i]) { pinMode(pn[i],INPUT);pullUpDnControl(pn[i],PUD_UP); }
		else    pinMode(pn[i],OUTPUT);
	}
}

void portSetRW(int hl) {
	
	int i;
	for (i=0; i< 26; i++) {
		if (pt[i])	digitalRead(pn[i]);
		else		digitalWrite(pn[i],hl);
	}
}

int main(int argc, char *argv[]) {
    
	wiringPiSetup();
	portSet();

	while (1) {
		
		portSetRW(HIGH);
		delay(500);
		portSetRW(LOW);
		delay(500);
	}
 
  return 0;
}
