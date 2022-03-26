#include <stdio.h>

int main(void)
{
	int a, b, c;
	
	printf("삼각형의 세변을 입력하시오 : \n");
	scanf("%d %d %d", &a, &b, &c);
	if ( a+b<=c || b+c<=a || c+a<=b ) 
	{
		printf("삼각형이 될 수 없음");
	}
	else if ( a==b && b==c && c==a )
	{
		printf("정삼각형");
	}
	else if ( a==b || b==c || c==a )
	{
		printf("이등변삼각형");
	}
	else
	{
		printf("일반삼각형");
	}
		
	return 0;
}
