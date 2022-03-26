#include <stdio.h>

int ipower(int x, int y);

int main(void)
{
	int i;
	for(i=0; i<=5; i++) {
		printf("%d\n", ipower(3, i));	
	}
	return 0;
}

int ipower(int x, int y)
{
	int i;
	int prod = 1;
	for(i=0; i<y; i++) {
		prod *= x;
	}
	return prod; 
}
