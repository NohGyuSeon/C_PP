#include <stdio.h>

int add_digit(int n) 
{
	if(n == 0)
	{
		return n;
	}
	else
	{
		return (n % 10) + add_digit(n / 10);
	}		
}

int main()
{
	int n;

  scanf("%d", &n);

  printf("%d", add_digit(n));

  return 0;
}
