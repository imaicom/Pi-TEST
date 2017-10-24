/* 練習問題 5-12-2 */
#include <stdio.h>
int main(void)
{
	int i,j,d[10][10];
	for(i=1; i<=9; i++){
		for(j=1; j<=9; j++){
			d[i][j]=i*j;
			printf("%3d",d[i][j]);
		}
		printf("\n");
	}
	return 0;
}
