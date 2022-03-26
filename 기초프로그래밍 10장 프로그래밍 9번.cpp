#include <stdio.h>
#include <ctype.h>
#include <string.h>

int count_word(const char *s);
int main(void)
{
	char input[100];
	int count;
	printf("텍스트를 입력하시오 : ");
	gets(input);
	count = count_word(input);
	printf("단어의 개수는 %d입니다.\n", count);
	
	return 0;
}

int count_word(const char *s)
{
	int i, wc = 0, waiting = 1;
	for(i=0; s[i]!=NULL; ++i) {
		if(isalpha(s[i])) {
			if(waiting)
			{
				wc++;
				waiting = 0;
			}
		}
		else waiting = 1;
	}
	
	return wc;
}
