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
	
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%lf", &x);
	
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%lf", &y);
	
	result = get_bigger (x, y);
	
	printf ("�� ū ���� %lf�Դϴ�.\n", result);
	
	return 0;
}


