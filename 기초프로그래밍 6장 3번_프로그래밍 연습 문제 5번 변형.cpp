#include <stdio.h>

int main(void)
{
	int i, j, k, a, b;
	scanf("%d %d", &a, &b);
	
	if ( a>=0 && b>=0 && a+b<=10 ) {
		for (i=1; i<=a; i++) {
			for (j=0; j<i; j++)
				printf("%d", b+j); 
				
			for (k=a-i; k>0; k--)
				printf("*");
			printf("\n");
		}
	}
	else {
		printf("Error!\n");		
	}
		 
	return 0;
}

		
