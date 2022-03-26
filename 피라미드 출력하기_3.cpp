#include <stdio.h>

int main(void)
{
	int i, j, N;
	scanf("%d", &N);
	
	for(i = 0; i < N; i++)
	{
		for(j=0; j<N-i; j++) {
			printf(" ");
		}
		for(j=0; j<i+1; j++) {
			printf("%d", (N-i+j) % 10);
		}
		for(j=1; j<i+1; j++) {
			printf("%d", (N-j) % 10);
		} 
		printf("\n"); 
	}		   
	
	return 0;
} 
