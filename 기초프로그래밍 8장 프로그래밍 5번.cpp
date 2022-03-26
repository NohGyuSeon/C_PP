#include <stdio.h>

int prime(int x);

int main(void)
{
	int i;
	for(i=2; i<=100; i++)
		if(prime(i) == 1)
			printf("%d ", i);
	return 0;
}

int prime(int x)
{
	int i;
	for(i=2; i<x; i++) {
		if((x%i) == 0) 
			return 0;
	}
	
	return 1;
}
