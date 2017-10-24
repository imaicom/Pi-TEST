/* 例題 5-13 */
#include <stdio.h>
int main(void)
{
	int i,key;
	int box[5] = {789,386,831,23,865};
	scanf("%d",&key);
	for(i=0; i<5; i++) {
		if(box[i]==key)
			printf("key = box[%d]\n",i);
	}
	return 0;
}
