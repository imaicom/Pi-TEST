/* rensyu mondai 5-9-1 */
#include <stdio.h>
int main(void)
{
	int i,s;
	s = 0;
	while (i < 10){
		i++;
		printf("%d\n",i);
		s = s + i;
	}
	printf("s = %d\n",s);
	return 0;
}

