#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char s[100];
	int i;
	printf("�ؽ�Ʈ�� �Է��Ͻÿ� : ");
	gets(s);
	for(i=0; i<strlen(s); i++) {
		s[i] = toupper(s[i]);
	}
	
	printf("�빮�� ��� : %s\n", s);
	
	return 0;
}
