#include <stdio.h>

double get_bigger (double n1, double n2)
{
	double big;
	
	if (n1>n2)
		big = n1;
	else
		big = n2;
	
	return (big);
}

int main (void)
{
	double x, y, result;
	
	printf("실수를 입력하시오 : ");
	scanf("%lf", &x);
	
	printf("실수를 입력하시오 : ");
	scanf("%lf", &y);
	
	result = get_bigger (x, y);
	
	printf ("더 큰 수는 %lf입니다.\n", result);
	
	return 0;
}


