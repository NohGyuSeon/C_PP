#include <stdio.h>

int main(void)
{
	char name[100];
	char address[100];
	
	printf("�̸��� ��� �ǽó���?");
	scanf("%s", name);
	
	printf("��� ��ó���?");
	scanf("%s", address);
	
	printf("�ȳ��ϼ���, %s�� ��� %s��.\n", address, name);
	return 0;
}
