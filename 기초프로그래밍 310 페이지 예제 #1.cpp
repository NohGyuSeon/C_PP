#include <stdio.h>

// �Լ��� �����Ѵ�.
 
int get_integer()
{
	int value;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &value);
	return value;
}

int main(void)
{
	int x = get_integer(); // �Լ��� ȣ���Ѵ�. 
	int y = get_integer(); // �Լ��� ȣ���Ѵ�. 
	int result = x+y;
	printf("�μ��� ��=%d\n", result);
	return 0;	
}
