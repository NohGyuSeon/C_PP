#include <stdio.h>
enum game { scissor, rock, paper };

int main(void)
{
	enum game computer = scissor;   // ����
	enum game user = scissor;
	printf("����(0), ����(1), ��(2)�� �Է��ϼ��� : ");
	scanf("%d", &user);
	
	if( user == scissor )
		printf("�����ϴ�.\n");
	else if( user == rock)
		printf("��ǻ�Ͱ� �����ϴ�.\n");
	else
		printf("��ǻ�Ͱ� �̰���ϴ�.\n");
		
	return 0;
}
