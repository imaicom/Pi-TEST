/* reidai 5-6 */
#include <stdio.h>
int main(void)
{
	int a;
	scanf("%d",&a);
	if(a>=70){
		printf("goukaku\n");
	}
	else if(a>=40){
		printf("saisiken\n");
	}
	else{
		printf("fugoukaku\n");
	}
	return 0;
}
