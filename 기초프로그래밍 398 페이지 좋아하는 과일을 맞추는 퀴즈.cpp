#include <stdio.h>
#include <string.h>

int main()  
{
	char Key[] = "�θ���";
	char buffer[80];
	
	do {
		printf("���� ���� �����ϴ� ������ �����ϱ��? ");
		scanf("%s", buffer);
	} while (strcmp(Key, buffer) != 0);
	
	printf("�¾ҽ��ϴ�!");
	
	return 0;
}
