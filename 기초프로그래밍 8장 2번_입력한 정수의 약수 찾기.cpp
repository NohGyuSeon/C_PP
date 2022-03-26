#include <stdio.h>

int func(int x);
int main(void)
{
	int x;
	scanf("%d", &x);
	func(x);
	
	return 0;	
}
 
int func(int x)
{
	int i;
	for(i=1; i<=x; i++) {
		if(x%i == 0) 
		{
			printf("%d ", i);
		}
	}
 } 
 
