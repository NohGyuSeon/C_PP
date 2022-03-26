#include <stdio.h>

struct complex {
	double real;
	double imag;
}; 

void get_input(struct complex *px);

struct complex complex_add(struct complex x, struct complex y);

int main(void)
{
	struct complex x, y, z;
	printf("ù��° ���Ҽ��� �Է��Ͻÿ�(a, b) : ");
	get_input(&x);
	printf("�ι�° ���Ҽ��� �Է��Ͻÿ�(a, b) : ");
	get_input(&y);
	z = complex_add(x, y);
	printf("%.1lf + %.1lfi\n", z.real, z.imag); 
}

void get_input(struct complex *px)
{
	scanf("%lf", &(px->real));
	scanf("%lf", &(px->imag));
}

struct complex complex_add(struct complex x, struct complex y)
{
	struct complex z;
	z.real = x.real + y.real;
	z.imag = x.imag + y.imag;
	
	return z;
}
