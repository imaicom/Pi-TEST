// cc -o mytest mytest.c -lwiringPi

#include <stdio.h>
#include <wiringPi.h>

int main() {
  
  unsigned char sw;
  
  wiringPiSetup();
  
  pinMode(15,INPUT);
  pullUpDnControl(15,PUD_UP);
  printf("Raspberry Pi SW & LED\n");

  while (1) {
    sw = digitalRead(15);
    printf("SWIN:%d\n",sw);
    delay(500);
  }
  return 0;
}
