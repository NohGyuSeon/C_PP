#include <stdio.h>
#include <math.h>

int func(int x);

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d", func(n));
	
	return 0;
}

int func(int x)
{
	if(x == 1) 
	{
		return 1;
	}
	
	{
		return x * x + func(x-1);
	}
}

