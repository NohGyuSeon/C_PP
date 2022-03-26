#include <stdio.h>

void get(double value, int *i_part, double *f_part);

int main(void)
{
	int n;
	double f;
	get(3.14, &n, &f);
	printf("%d %f\n", n, f);
	
	return 0;
}

void get(double value, int *i_part, double *f_part)
{
	*i_part = (int)value;
	*f_part = value - (int)value;
}

