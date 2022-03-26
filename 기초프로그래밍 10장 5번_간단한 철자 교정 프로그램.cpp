#include <stdio.h>
#include <string.h> 
#include <ctype.h>

int main(void)
{
	char s[100] = { 0 };
	
	gets(s);
	
	if( !isupper(s[0]) )
	{
		s[0] = toupper(s[0]);
	}
	
	if( s[strlen(s)-1] != '.' ) 
	{
		s[strlen(s)] = '.';
		s[strlen(s)+1] = NULL;
	}
	
	if( s[strlen(s)-2] == '.' && s[strlen(s)-1] == '.' ) 
	{
		s[strlen(s)-1] = '\0'; 
	}
	
	printf("Corrected: %s", s);
	
	return 0;
}

/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char s[100];
	gets(s);
	
	int lenth = strlen(s) - 1;
	
	if( !isupper(s[0]) )
	{
		s[0] = toupper(s[0]);
	}

	if(s[lenth] != '.')
	{
		s[lenth + 1] = '.';	
		s[lenth + 2] = '\0';
	}
	else if(s[lenth - 1] == '.' && s[lenth] == '.')
	{
		s[lenth] = '\0';
	}
	
	printf("Corrected: %s", s);
	
	return 0;
}
*/
