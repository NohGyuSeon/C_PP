#include <stdio.h>

int main(void)
{
	int x, y;
	printf("정수를 입력하시오 : ");
	scanf("%d", &x);
	printf("정수를 입력하시오 : ");
	scanf("%d", &y);
	
	printf("두 수의 합은 %d입니다.\n", x+y);
	if(x>y)
		printf("두 수의 차는 %d입니다.\n", x-y); 
	else
		printf("두 수의 차는 %d입니다.\n", y-x);
		
	return 0;
 } 
