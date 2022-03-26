#include <stdio.h>
int main(void)
{
	double x, y;
	
	printf("2개의 실수를 입력하시오: ");
	scanf("%lf %lf", &x, &y);
	printf("정수부의 합  = %d\n", (int)x + (int)y);
	
	return 0;
}
	// %.2lf -> 소수점 셋째자리에서 반올림, 둘째 자리까지 출력
	// 버림 할 시 -> 정수표현으로 출력(소수부는 버림) 
