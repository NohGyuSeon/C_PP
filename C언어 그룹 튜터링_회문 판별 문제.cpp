#include <stdio.h>
#include <string.h>

void func(char str[])
{
	int l = 0;
	int h = strlen(str) - 1;
	
	while(!str[l] == '\0')
	{
		if(str[l++] != str[h--])
		{
			printf("%s : X ȸ���� �ƴ�", str);
			return; 
		}
	}
	printf("%s : O ȸ���� ����", str);
}

int main(void)
{
	char input[100] = {0};
	gets(input);
	
	func(input);
	
	return 0;
}
