// cc -o mytest mytest.c -lwiringPi

#include <stdio.h>
#include <wiringPi.h>

int main() {
  
  unsigned char sen1,sen2;
  
  wiringPiSetup();
  
  pinMode(15,INPUT);
  pullUpDnControl(15,PUD_UP);
  pinMode(16,INPUT);
  pullUpDnControl(16,PUD_UP);
  printf("Raspberry Pi SW & LED\n");

  while (1) {
    sen1 = digitalRead(15);
    sen2 = digitalRead(16);
    printf("SWIN:%d %d\n",sen1,sen2);
    delay(500);
  }
  return 0;
}
