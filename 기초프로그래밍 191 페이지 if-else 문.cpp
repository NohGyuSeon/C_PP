#include <stdio.h>

int main(void)
{
	int number;
	scanf("%d", &number);
	
	if(number == 0)
		printf("����\n");
	else if(number == 1)
		printf("�ϳ�\n");
	else if(number == 2)
		printf("��\n");
	else
		printf("����\n");
		
}
