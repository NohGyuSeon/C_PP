#include <stdio.h>
int main(void)
{
	long long a, b, i;
	long long a1 = 0, a2 = 0, b1 = 0;
	scanf("%lld %lld", &a, &b);
	
	a1 = a;
	for(i=0; i<b; i++) {
		a1 = a1 / 10;
	}
	
	a2 = a1;
	for(i=0; i<b; i++) {
		a2 = a2 * 10;
	}
	
	b1 = a - a2;

	if(b == 0) 
	{
		printf("%lld", a);
	}
	else 
	{
		printf("%lld.%lld", a1, b1);
	}
	
	return 0;
 } 
