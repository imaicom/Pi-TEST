/* 例題 5-8 */
#include <stdio.h>
int main(void)
{
	int i,s;
	s = 0;
	for (i=1; i<=10; i++){
		s = s + i;
	}
	printf("s = %d\n",s);
	return 0;
}
