/* 練習問題 5-11-1 */
#include <stdio.h>
int main(void)
{
	int i,j;
	i = 1;
	while(i<=5){
		i++;
		j = 1;
		while(j<i){
			j++;
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
