#include <stdio.h>
#include <string.h>

void isPalindrome(char str[])
{
	int l = 0;
	int h = strlen(str) - 1;
	
	while(h>1)
	{
		if(str[l++] != str[h--])
		{
			printf("%s�� ȸ���� �ƴ�.\n", str);
			return;
		}
	}
	printf("%s�� ȸ����.\n", str);
}

int main(void)
{
	isPalindrome("abba");
	isPalindrome("abcdef");
	
	return 0;
}
