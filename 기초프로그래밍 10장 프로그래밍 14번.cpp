#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char s[200] = { 0 };
	printf("�ؽ�Ʈ�� �Է��Ͻÿ� : ");
	gets(s);
	if ( !isupper(s[0]) ) {
		s[0] = toupper(s[0]);
	}  
	if ( s[strlen(s)-1] != '.' ) {
		s[strlen(s)] = '.';
		s[strlen(s)+1] = NULL;
	}
	
	printf("��� �ؽ�Ʈ ��� : %s \n", s);
	
	return 0;
} 
