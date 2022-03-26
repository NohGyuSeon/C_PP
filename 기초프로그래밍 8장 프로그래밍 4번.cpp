#include <stdio.h>

void get_divisor(int n);

int main(void)
{
	get_divisor(8);
	return 0;
}

void get_divisor(int n)
{
	int i;
	for(i=1; i<=n; i++) 
		if( n%i == 0)	
			printf("%d\n", i);
}
