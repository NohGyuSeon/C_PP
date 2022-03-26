#include <stdio.h>

int main(void)
{
	int number, even;
	
	printf("정수를 입력하시오 : ");
	scanf("%d", &number);
	even = (number % 2 == 0);
	if (even)
		printf("%d는 짝수입니다.\n", number);
	else
		printf("%d는 홀수입니다.\n", number);
		
	return 0;
 } 
