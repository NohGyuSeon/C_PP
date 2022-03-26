#include <stdio.h>

int main(void)
{
	double x, y;
	
	printf("2개의 실수를 입력하시오 : ");
	scanf("%lf %lf", &x, &y);
	printf("합의 정수부 = %d\n", (int)x + (int)y);
	
	return 0;	
 } 
