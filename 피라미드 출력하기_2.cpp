#include <stdio.h>
#define N 20

int main(void)
{
	int i, j;
	for(i = 0; i < N; i++)
	{
		for(j=0; j<N-i; j++) {
			printf("  ");
		}
		for(j=0; j<i+1; j++) {
			printf("¡Ú");
		}
		for(j=1; j<i+1; j++) {
			printf("¡Ú");
		} 
		printf("\n"); 
	}		   
	
	return 0;
} 
