// ��ȯ���� ���丮�� �Լ� ���
#include <stdio.h>

long factorial(int n);

int main(void)
{
	int x = 0, result;
	
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &x);
	
	result = factorial(x);
	printf("%d!�� %d�Դϴ�. \n", x, result);
	
	return 0;
}

long factorial(int n)
{ 
	printf("factorial(%d)\n", n);
	
	if(n <= 1) return 1;
	else return n * factorial(n - 1);
}
