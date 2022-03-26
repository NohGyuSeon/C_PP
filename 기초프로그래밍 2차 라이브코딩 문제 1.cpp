#include <stdio.h>

int prime(int x, int y){
	int i;
	int max = 0;
	
	if(x<y)
	{
		for(i=2; i<y; i++) 
		{
			if(y%i == 0 && x%i == 0)
				if(max < i)
					max = i;
		}
	}
	else 
	{
		for(i=2 ; i<x; i++) 
		{
			if(y%i == 0 && x%i == 0)
					if(max < i)
					max = i;
		}
	}
	
	return max;
}

int main(void)
{
	int a,b;
	scanf("%d %d", &a, &b);

	printf("%d", prime(a, b));
	
	return 0;
}
