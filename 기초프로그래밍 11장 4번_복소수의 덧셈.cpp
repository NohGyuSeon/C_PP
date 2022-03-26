#include <stdio.h>

struct complex {
	double real;
	double imag;
	char o;
};

void get_input(struct complex *px);

struct complex complex_add(struct complex x, struct complex y);

int main(void)
{
	struct complex x, y, z;
	get_input(&x);
	get_input(&y); 
	z = complex_add(x, y);
	if(z.imag > 0)
	printf("%.2f+%.2fi\n", z.real, z.imag);
	else 
	printf("%.2f%.2fi\n", z.real, z.imag);	
}

void get_input(struct complex *px)
{
	scanf("%lf%lf%c", &(px->real), &(px->imag), &(px->o));
}  

struct complex complex_add(struct complex x, struct complex y)
{
	struct complex z;
	z.real = x.real + y.real;
	z.imag = x.imag + y.imag;
	
	return z;
}
