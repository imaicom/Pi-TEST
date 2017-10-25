/* rensyu mondai 5-4 */
#include <stdio.h>
int main(void)
{
	int a,b,wa,sa,seki,syou;
	scanf("%d",&a);
	scanf("%d",&b);
	wa = a + b;
	sa = a - b;
	seki = a * b;
	syou = a / b;
	printf("a + b = %d\n",wa);
	printf("a - b = %d\n",sa);
	printf("a * b = %d\n",seki);
	printf("a / b = %d\n",syou);
	return 0;
}

