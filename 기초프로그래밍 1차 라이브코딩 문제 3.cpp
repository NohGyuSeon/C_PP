#include <stdio.h>

int main(void) {

	int change;

	scanf("%d", &change);

	int c50000, c10000, c5000, c1000, c100, c10;

	c50000 = change / 50000;
	c10000 = change % 50000 / 10000 ;
	c5000 = change % 10000 / 5000;
	c1000 = change % 5000 / 1000;
	c100 = change % 1000 / 100;
	c10 = change %  100 / 10;

	if(c50000>0)
	printf("50000:%d ",c50000);
	if(c10000>0)
		printf("10000:%d ",c10000);
	if(c5000>0)
		printf("5000:%d ",c5000);
	if(c1000>0) 
		printf("1000:%d ",c1000);
	if(c100>0)
		printf("100:%d ",c100);

	return 0;
	
}
