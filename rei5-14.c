/* reidai 5-14 */
#include <stdio.h>
#define NN 5
int main(void)
{
	int i,m,d[NN]={38,12,78,91,55};
	m=d[0];
	for(i=1; i<NN; i++){
		if(m<d[i]) m=d[i];
	}
	printf("MAX = %d\n",m);
	return 0;
	
}
