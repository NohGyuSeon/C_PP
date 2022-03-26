#include <stdio.h>
#include <math.h>

int recursive(int n);

int main(void)
{
	int n;
	printf("정수를 입력하시오 : ");
	scanf("%d", &n);
	printf("%d\n", recursive(n));
}

int recursive(int n)
{
	if ( n == 1) return 1;
	else return n*n*n + recursive(n - 1); 
}
 
