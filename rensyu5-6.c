/* 練習問題 5-6 */
#include <stdio.h>
int main(void)
{
	int a,harai;
	scanf("%d",&a);
	if(a>=5000){
		harai = a * 0.8;
	}
	else if(a>=3000){
		harai = a * 0.9;
	}
	else{
		harai = a;
	}
	printf("支払い金額 %d 円\n",harai);
	return 0;
}
