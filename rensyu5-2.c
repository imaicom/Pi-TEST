/* 練習問題 5-2 */
#include <stdio.h>
int main(void){
  float a,b,keisan1,keisan2;
  a = 35.2;
  b = 85.6;
  keisan1 = a * a + b * b;
  keisan2 = a * a - b * b;
  printf("a * a + b * b = %f\n",keisan1);
  printf("a * a - b * b = %f\n",keisan2);
  return 0;
}
