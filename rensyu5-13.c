/* 練習問題 5-13 */
#include <stdio.h>
int main(void)
{
	int i,key,n;
	n=0;
	int box[5] = {789,386,831,23,865};
	scanf("%d",&key);
	for(i=0; i<5; i++) {
		if(box[i]==key) {
			printf("key = box[%d]\n",i);
			n = 1;
		}
	}
	if(n==0) printf("該当なし\n");
	return 0;
}
