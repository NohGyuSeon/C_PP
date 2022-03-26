#include <stdio.h>
#include <string.h>

int main(void)
{
	char string[100];
	int c = 0, count[26] = { 0 };
	
	printf("문자열을 입력하시오 : ");
	gets(string);
	
	while(string[c] != '\0')
	{
		if(string[c] >= 'a' && string[c] <= 'z')
			count[string[c] - 'a']++;
		c++;
	 } 
	 
	 for(c=0; c<26; c++) {
	 	if(count[c] != 0)
	 		printf("%c : %d\n", c +'a', count[c]);
	 }
	 
	 return 0;
}
