#include <stdio.h>

int main(void)
{
	int i, a, b;
	
	for(i=1; i<100; i++) {
	scanf("%d %d", &a, &b);
		if( (a>=2 && a<=9 && b>=2 && b<=9) ) {
			break;
		}
		else
			printf("Try again\n");
	}
	for(i=1; i<100; i++) 
		if( (i%a)==0 && (i%b)==0 )
			printf("%d ", i);
	 
	return 0;
 } 
 		 
