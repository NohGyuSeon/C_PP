#include <stdio.h>
int main(void)
{
	int value, value1, value2;
	
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &value);
	value1 = value / 10;
	value2 = value1 / 10;
	
	printf("���� �ڸ��� : %d\n", value2 % 10);
	printf("���� �ڸ��� : %d\n", value1 % 10);
	printf("���� �ڸ��� : %d\n", value % 10);
	
	return 0; 
 } 
