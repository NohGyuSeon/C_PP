#include <stdio.h>

int main(void)
{
	int x, y;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &x);
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &y);
	
	printf("�� ���� ���� %d�Դϴ�.\n", x+y);
	if(x>y)
		printf("�� ���� ���� %d�Դϴ�.\n", x-y); 
	else
		printf("�� ���� ���� %d�Դϴ�.\n", y-x);
		
	return 0;
 } 
