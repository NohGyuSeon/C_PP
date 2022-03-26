#include <stdio.h>

int main(void)
{
	int sum=0, x;
	
	while(1) 
	{ 
		scanf("%d\n", &x);
		
		if (x == 0){
			break;
		}
		else if (x > 0){
			sum += x;
		}
		else if (x < 0){
			sum -= x;
		}
	}
	printf("%d \n", sum);
	
	return 0;
}	
