#include <stdio.h>
int main(void)
{
	int x;
	
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);
	
	printf("������ ���� %f�Դϴ�\n.", (x*x*x - 20.0) / (x - 7.0));
	
	return 0;
}

