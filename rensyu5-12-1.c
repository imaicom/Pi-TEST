/* 練習問題 5-12-1 */
#include <stdio.h>
int main(void)
{
	int i;
	float s,a[5];
	for(i=0; i<5; i++)
		scanf("%f",&a[i]);
	s = 0.0;
	for(i=0; i<5; i++)
		s = s + a[i];
	printf("s = %f\n",s);
	printf("平均 = %f\n",s/5);
	return 0;
}
