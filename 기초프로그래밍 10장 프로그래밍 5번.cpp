#include <stdio.h>

int main(void)
{
	char text[100], result[100];
	int c = 0, d = 0;
	
	printf("�ؽ�Ʈ�� �Է��Ѵ� : ");
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
	
	printf("���� �ؽ�Ʈ : %s \n", result);
	
	return 0; 
}
