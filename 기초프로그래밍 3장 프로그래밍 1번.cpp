#include <stdio.h>

int main(void)
{
	double x;
	printf("실수를 입력하시오 : ");
	scanf("%lf", &x);
	printf("지수 형식으로는 %e입니다.\n", x);
	
	return 0;
}
