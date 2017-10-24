/* 練習問題 5-9-2 */
#include <stdio.h>
int main(void)
{
	char c;
	c = ' ';
	while(c != 'x') {
		scanf("%c",&c);
		printf("%c",c);
	}
	return 0;
}
