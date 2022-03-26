#include <stdio.h>

double func(double x, double y) 
{
	double value;
	value = 1.5*x + 3.0*y;
	
	return value;
}

int main(void)
{
	double x, y;
	scanf("%lf %lf", &x, &y);
	printf("%f", func(x, y));
	
	return 0;
}

