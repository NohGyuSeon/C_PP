#include <stdio.h>

int main(void) 
{
	int i, j, a;
	scanf("%d", &a);
	
	if(a<0) {
		printf("");
	}
	else {
			for (i=0; i<a; i++) {
				for (j=0; j<i; j++) {
					printf(" ");
				}
				for (j=0; j<a-i; j++) {
					printf("%d", (j+1+i)%10);
				}
				for (j=1; j<a-i; j++) {
					printf("%d", (a-j)%10);
				}
				printf("\n");
			}	
		}
			
	return 0;
}
