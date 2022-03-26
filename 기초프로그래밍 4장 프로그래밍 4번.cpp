#include <stdio.h>
int main(void)
{
	int value, value1, value2;
	
	printf("정수를 입력하시오 : ");
	scanf("%d", &value);
	value1 = value / 10;
	value2 = value1 / 10;
	
	printf("백의 자리수 : %d\n", value2 % 10);
	printf("십의 자리수 : %d\n", value1 % 10);
	printf("일의 자리수 : %d\n", value % 10);
	
	return 0; 
 } 
