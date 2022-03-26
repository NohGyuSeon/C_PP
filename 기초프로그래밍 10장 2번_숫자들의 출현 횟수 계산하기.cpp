#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char s[100] = { 0 };
	int freq[256] = { 0 };
	int i;
	
	gets(s);
	for(i=0; i<strlen(s); i++) {
		freq[s[i]]++;
	}
	
	for(i='0'; i<'9'; i++) {
		if(freq[i] != 0) {
			printf("%c: %d\n", i, freq[i]);
		}
	}
	
	return 0;
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	char s[20] = {0};
	char count[57] = {0}; // '9' = 57 
	gets(s);
	
	int i;
	for(i=0; i<strlen(s); i++)
	{
		count[s[i]]++;
	}

	for(i='0'; i<'9'; i++)
	{
		if(count[i] != 0)
		{ 
			printf("%c: %d\n", i, count[i]);	
	//		printf("'9' = %d", '9');
		}
	}
	
	return 0;
}
*/

