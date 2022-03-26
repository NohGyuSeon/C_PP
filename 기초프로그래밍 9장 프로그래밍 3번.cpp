#include <stdio.h>
#include <math.h>

void quadratic (int a, int b, int c, double* xplus, double* xminus)
{
	*xminus = (-b - sqrt (b * b -4 * a * c)) / (2 * a);
	*xplus = (-b + sqrt (b * b -4 * a * c)) / (2 * a);
 } 
 
int main(void)
{
	int a = 10, b = 40, c = 30;
	double xplus, xminus;
	
	quadratic (a, b, c, &xplus, &xminus);
	
	printf("ù��° �Ǳ� : %lf\n", xplus);
	printf("�ι�° �Ǳ� : %lf\n", xminus);
	
	return 0;
}
