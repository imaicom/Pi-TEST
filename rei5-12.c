/* reidai 5-12 */
#include <stdio.h>
int main(void)
{
	int i,s,a[5];
	for(i=0; i<5; i++)
		scanf("%d",&a[i]);
	s = 0;
	for(i=0; i<5; i++)
		s = s + a[i];
	printf("s = %d\n",s);
	return 0;
}
