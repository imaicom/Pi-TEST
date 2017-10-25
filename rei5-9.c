/* reidai 5-9 */
#include <stdio.h>
int main(void)
{
	int i,s;
	scanf("%d",&i);
	s = 0;
	while (i != 999) {
		s = s + i;
		scanf("%d",&i);
	}
	printf("s = %d\n",s);
	return 0;
}
