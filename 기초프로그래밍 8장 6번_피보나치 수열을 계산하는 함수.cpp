#include <stdio.h>
#include <math.h>

int func(int x)
{
	if(x == 0) {
		return 0;
	}
	else if(x == 1) {
		return 1;
	}
	else
		return func(x - 1) + func(x - 2);
 }
 
 int main(void)
 {
 	int n;
 	
 	scanf("%d", &n);
 	printf("%d", func(n));
 	
 	return 0;
 }
