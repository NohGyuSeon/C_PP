#include <stdio.h>

int main(void)
{
	char text[100], result[100];
	int c = 0, d = 0;
	
	printf("텍스트를 입력한다 : ");
	gets(text);
	
	while (text[c] != '\0')
	{
		if (text[c] != 'a' && text[c] != 'i' &&
			text[c] != 'o' && text[c] != 'e' &&
			text[c] != 'u') {
				result[d] = text[c];
				d++;
			}
			c++;
	}
	
	result[d] = '\0';
	
	printf("최종 텍스트 : %s \n", result);
	
	return 0; 
}
