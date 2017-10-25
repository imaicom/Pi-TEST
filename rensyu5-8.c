/* rensyu mondai 5-8 */
#include <stdio.h>
int main(void)
{
	int i,s;
	s = 0;
	for (i=1; i<=100; i=i + 2){
		printf("%d\n",i);
		s = s + i;
	}
	printf("s = %d\n",s);
	return 0;
}
