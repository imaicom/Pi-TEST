// cc -o swled swled.c -lwiringPi
#include <stdio.h>
#include <wiringPi.h>
int main(int argc, char *argv[]) {
  
  unsigned char sw;
  unsigned char led0 , led1;
  wiringPiSetup();
  
  pinMode(0,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(15,INPUT);
  pullUpDnControl(15,PUD_UP);
  printf("Raspberry Pi SW & LED\n");
  led0 = 0;
  while (1) {
    sw = digitalRead(15);
    if(sw == 0) led1 = 1;
    else        led1 = 0;
    pringf("SWIN:%d\n",led1);
    led0 ^= 1;
    digitalWrite(0,led0);
    digitalWrite(1,led1);
    delay(500);
  }
  return 0;
}
