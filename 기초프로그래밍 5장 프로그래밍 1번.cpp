#include <stdio.h>

int main(void)
{
	int number, even;
	
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &number);
	even = (number % 2 == 0);
	if (even)
		printf("%d�� ¦���Դϴ�.\n", number);
	else
		printf("%d�� Ȧ���Դϴ�.\n", number);
		
	return 0;
 } 
