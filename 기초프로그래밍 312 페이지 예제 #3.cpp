#include <stdio.h>

// �Լ��� �����Ѵ�.
int get_integer()
{
	int value;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &value);
	return value;
 } 
 
 // �Լ��� �����Ѵ�.
 int power(int x, int y)
 {
 	int i;
 	long result = 1;
 	
 	for (i=0; i<y; i++) {
 		result *= x; // result = result * x
	 }
	 
	return result;
 }
 
int main(void)
{
	int x = get_integer();
	int y = get_integer();
	int result = power(x, y);
	printf("%d�� %d�� = %d \n", x, y, result);
	
	return 0; 
}

