#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char s[100] = { 0 };
	int freq[256] = { 0 };
	int i;
	
	printf("텍스트를 입력하시오 : ");
	gets(s);
	for(i=0; i<strlen(s); i++) {
		freq[s[i]]++;
	}
	for(i='a'; i<='z'; i++) {
		if (freq[i] != 0) {
			printf("%c문자가 %d번 등장하였음!\n", i ,freq[i]);		
		}
	}
	
	return 0;
}
