#include <stdio.h>
#define SQUARE(x) ((x) * (x))

int main(void)
{
	int x = 2;
	
	printf("SQUARE(3) = %d\n", SQUARE(3));   // ������� ���밡�� 
	printf("SQUARE(1.2) = %f\n", SQUARE(1.2));   // �Ǽ����� ���밡�� 
	printf("SQUARE(2+3) = %d\n", SQUARE(2+3));   // ���Ŀ��� ���밡�� 
	
	printf("x = %d\n", x);   // �������� ���� ���� 
	printf("SQUARE(x) = %d\n", SQUARE(x));   // �������� ���� ����
	printf("SQUARE(++x) = %d\n", SQUARE(++x));  // �� ����	 

/*
	++x;
	printf("SQUARE(++x) = %d\n", SQUARE(x));
*/
		
	return 0;
}

