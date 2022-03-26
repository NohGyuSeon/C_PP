#include <stdio.h>
#include <string.h>

void isPalindrome(char str[])
{
	int l = 0;
	int h = strlen(str) - 1;
	
	while(!str[l] == '\0')
	{
		if(str[l++] != str[h--])
		{
			printf("%s: No", str);
			return;
		}
	}
	printf("%s: Yes", str);
}

int main(void)
{
	char input[100] = { 0 };
	gets(input);
	
	isPalindrome(input);
	
	return 0;
}
