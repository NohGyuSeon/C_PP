#include <stdio.h>

int main(void)
{
	int x, y;
	
	printf("두 개의 정수 : ", x, y);
	
	scanf("%d", &x);
	scanf("%d", &y);
	 
	printf("%d", x+y);
	printf("%d", x-y);
	printf("%d", x*y); 
	printf("%d", x/y);
	
	return 0;
}
