/* 例題 5-7 */
#include <stdio.h>
int main(void)
{
	int a,b,k;
	a = 20;
	b = 8;
	scanf("%d",&k);
	switch (k){
		case 1:
			printf("a + b = %d\n",a + b);
			break;
		case 2:
			printf("a - b = %d\n",a - b);
			break;
		case 3:
			printf("a * b = %d\n",a * b);
			break;
		default:
			printf("input error\n");
	}
	return 0;
}
