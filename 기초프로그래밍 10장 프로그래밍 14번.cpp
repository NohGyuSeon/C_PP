#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char s[200] = { 0 };
	printf("텍스트를 입력하시오 : ");
	gets(s);
	if ( !isupper(s[0]) ) {
		s[0] = toupper(s[0]);
	}  
	if ( s[strlen(s)-1] != '.' ) {
		s[strlen(s)] = '.';
		s[strlen(s)+1] = NULL;
	}
	
	printf("결과 텍스트 출력 : %s \n", s);
	
	return 0;
} 
