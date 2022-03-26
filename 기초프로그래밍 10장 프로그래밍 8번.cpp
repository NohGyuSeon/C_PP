#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char s[100];
	int i;
	printf("텍스트를 입력하시오 : ");
	gets(s);
	for(i=0; i<strlen(s); i++) {
		s[i] = tolower(s[i]);
	}
	printf("소문자 출력 : %s\n", s);
	
	return 0;
}
