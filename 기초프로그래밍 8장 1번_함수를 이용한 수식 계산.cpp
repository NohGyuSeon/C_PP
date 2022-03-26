#include <stdio.h>

double func(double x, double y);

int main(void)
{
	double x, y;
	scanf("%lf %lf", &x, &y);
	printf("%.1f", func(x, y));
	
	return 0;
 }
 
double func(double x, double y)
 {
	return 3.0*x + 1.5*y;
 }
