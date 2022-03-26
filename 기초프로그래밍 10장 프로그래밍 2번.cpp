#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, k;
	char passwd[10] = { 0 };
	
	printf("비밀번호를 입력하시오: ");
	for (i = 0; i<4; i++) {
		int ch = getchar();
		passwd[i] = ch;
		putchar('*');
	}
	if( strcmp(passwd, "1234")==0)
		printf("비밀번호 일치 \n");
	else
		printf("비밀번호 불일치 \n");
		
	return 0;
}
