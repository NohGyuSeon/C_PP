/******************************************************************
* [���α׷���] 12�� 
* ������ 485: 3��
* �ؽ�Ʈ ���� �ȿ� ����ִ� ������ ������ ����ϴ� ���α׷� 
* �й�: 10�й�   
* �й�: 20182337 
* �̸�: ��Լ� 
********************************************************************/

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main(void)
{
	FILE *f;
	char ch;
	int line = 0, word = 0;

	f = fopen("sample", "r");
	while((ch=getc(f)) != EOF)
	{
		if(ch == '\n')
			line++;
		putchar(ch);
	}
	fclose(f);
	printf("\n������ ����=%d\n",line);
	
	return 0;
}

