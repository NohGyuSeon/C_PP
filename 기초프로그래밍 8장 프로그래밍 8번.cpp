#include <stdio.h>
#include <math.h>

void quad_eqn(double a, double b, double c);

int main(void)
{
	double a, b, c;
	
	printf("2�� �������� ����� �Է��Ͻÿ� : \n");
	printf("a : ");
	scanf("%lf", &a);
	printf("b : ");
	scanf("%lf", &b);
	printf("c : ");
	scanf("%lf", &c);

	quad_eqn(a, b, c);
	return 0;
 }
 
 void quad_eqn(double a, double b, double c)
 {
 	double disc;
 	disc = b*b - 4.0*a*c;
 	if ( disc > 0 ) {
 		printf("%lf\n", (-b + sqrt(disc))/(2.0*a));
 		printf("%lf\n", (-b - sqrt(disc))/(2.0*a));
	 }
	else 
		printf("���� ����\n");
  } 
  
