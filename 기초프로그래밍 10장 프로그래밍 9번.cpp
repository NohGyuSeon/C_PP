#include <stdio.h>
#include <ctype.h>
#include <string.h>

int count_word(const char *s);
int main(void)
{
	char input[100];
	int count;
	printf("�ؽ�Ʈ�� �Է��Ͻÿ� : ");
	gets(input);
	count = count_word(input);
	printf("�ܾ��� ������ %d�Դϴ�.\n", count);
	
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
