/* rensyu mondai 5-7 */
#include <stdio.h>
int main(void)
{
	int a,k,harai;
	scanf("%d",&k);
	scanf("%d",&a);
	switch (k){
		case 1:
			harai = a * 0.9;
			break;
		case 2:
			harai = a * 0.8;
			break;
		case 3:
			harai = a * 0.7;
			break;
		default:
			printf("nyuuryoku misu\n");
			
	}
	printf("siharai kingaku %d\n",harai);
	return 0;
}
