#include <stdio.h>

int main(void)
{
	int x, y, z, avg;
	printf("정수를 입력하시오 : ");
	scanf("%d", &x);
	printf("정수를 입력하시오 : ");
	scanf("%d", &y);
	printf("정수를 입력하시오 : ");
	scanf("%d", &z);
	
	avg = (x + y+ z) / 3;
	printf("평균은 %d입니다. \n", avg);
	
	return 0;
}
