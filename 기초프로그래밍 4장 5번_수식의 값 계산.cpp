#include <stdio.h>
int main(void)
{
	int x;
	
	printf("정수를 입력하시오: ");
	scanf("%d", &x);
	
	printf("수식의 값은 %f입니다\n.", (x*x*x - 20.0) / (x - 7.0));
	
	return 0;
}

