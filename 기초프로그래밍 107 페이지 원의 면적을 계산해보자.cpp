#include <stdio.h>
#define PI 3.141592

int main(void)
{
	double radius; // 원의 반지름 
	double area; // 원의 면적
	printf("원의 반지름을 입력하시오 : ");
	scanf("%lf", &radius); 
	
	area = PI * radius * radius;
	printf("원의 면적 : %f \n", area);
	
	return 0;
 } 
