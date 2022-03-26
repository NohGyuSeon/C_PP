#include <stdio.h>

int is_prime(int x);
int n;

int main()
{
	scanf("%d", &n);

	for(int i=1; i<=n; i++)
	{
		if(is_prime(i) == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

int is_prime(int x) {
	for(int i=2; i<x; i++)
	{
		if(x%i == 0)  
		{ 
			return 0;
		}
	}
	return 1;
}


