#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char text[100] = { 0 };  
	char result[100] = { 0 };
	int c = 0, d = 0;
	
	printf("�ؽ�Ʈ�� �Է��Ͻÿ� : ");
	gets(text);
	 
	while (text[c] != '\0')
	{
		if(!(text[c] == ' ' && text[c+1] == ' ')) {
			result[d] = text[c];
			d++;
		}
		c++;
	}
	
	result[d] = '\0';
	
	printf("������ ���ŵ� �ؽ�Ʈ : %s \n", result);
	
	return 0;
}
