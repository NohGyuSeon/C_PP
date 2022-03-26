#include <stdio.h>

int main(void)
{
	int number;
	scanf("%d", &number);
	
	if(number == 0)
		printf("없음\n");
	else if(number == 1)
		printf("하나\n");
	else if(number == 2)
		printf("둘\n");
	else
		printf("많음\n");
		
}
