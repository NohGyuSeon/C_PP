#include <stdio.h>

int main(void)
{
	int A[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	
	int a, b, c, d;
	
	a = A[2] + A[3] + A[4];
	b = A[5] + A[6] + A[7];
	c = A[8] + A[9] + A[10];
	d = A[11] + A[0] + A[1];
		
	printf("���� %d���Դϴ�.\n", a);
	printf("������ %d���Դϴ�.\n", b);
	printf("������ %d���Դϴ�.\n", c);
	printf("�ܿ��� %d���Դϴ�.\n", d);
	
	return 0;
}
