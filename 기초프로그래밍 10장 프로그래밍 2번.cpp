#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, k;
	char passwd[10] = { 0 };
	
	printf("��й�ȣ�� �Է��Ͻÿ�: ");
	for (i = 0; i<4; i++) {
		int ch = getchar();
		passwd[i] = ch;
		putchar('*');
	}
	if( strcmp(passwd, "1234")==0)
		printf("��й�ȣ ��ġ \n");
	else
		printf("��й�ȣ ����ġ \n");
		
	return 0;
}
