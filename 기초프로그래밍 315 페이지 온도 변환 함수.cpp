#include <stdio.h>

double FtoC(double temp_f); // �Լ� ���� ����  

int main(void)
{
	double c, f;
	f = 32.0;
	c = FtoC(f); // �Լ� ȣ�� 
	printf("ȭ���µ� %f�� �����µ� %f�� �ش�ȴ�. \n", f, c);
	return 0;
}

double FtoC(double temp_f) // �Լ� ���� 
{
	double temp_c; 
	temp_c = (5.0 * (temp_c - 32.0)) / 9.0;
	return temp_c;
} 
