#include <stdio.h>

int main(void)
{
	int a, b, c;
	
	printf("�ﰢ���� ������ �Է��Ͻÿ� : \n");
	scanf("%d %d %d", &a, &b, &c);
	if ( a+b<=c || b+c<=a || c+a<=b ) 
	{
		printf("�ﰢ���� �� �� ����");
	}
	else if ( a==b && b==c && c==a )
	{
		printf("���ﰢ��");
	}
	else if ( a==b || b==c || c==a )
	{
		printf("�̵�ﰢ��");
	}
	else
	{
		printf("�Ϲݻﰢ��");
	}
		
	return 0;
}
