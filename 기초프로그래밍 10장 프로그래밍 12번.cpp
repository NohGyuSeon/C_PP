#include <stdio.h>

int main(void)
{
	char text[100], result[100];
	int c = 0, d = 0;
	
	printf("�ؽ�Ʈ�� �Է��Ͻÿ� : ");
	gets(text);
	
	while(text[c] != '\0')
	{
		if(text[c] != ' ' && text[c] != '\t' && text[c] != '\n') {
			result[d] = text[c];
			d++;			
		}
		c++;
	}
	
	result[d] = '\0';
	
	printf("���� �ؽ�Ʈ : %s \n", result);
	
	return 0;
}
