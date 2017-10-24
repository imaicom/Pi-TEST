/* 例題 5-6 */
#include <stdio.h>
int main(void)
{
	int a;
	scanf("%d",&a);
	if(a>=70){
		printf("合格\n");
	}
	else if(a>=40){
		printf("再試験\n");
	}
	else{
		printf("不合格\n");
	}
	return 0;
}
