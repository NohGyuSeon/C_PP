#include <stdio.h>
#include <math.h>

int recursive(int n);

int main(void)
{
	int n;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &n);
	printf("%d\n", recursive(n));
}

int recursive(int n)
{
	if ( n == 1) return 1;
	else return n*n*n + recursive(n - 1); 
}
 
