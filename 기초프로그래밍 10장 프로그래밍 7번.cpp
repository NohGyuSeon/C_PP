#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100];
	char result[100];
	
	printf("입력 문자열 : ");
	gets(str);
	
	int i;
	int size = strlen(str);
	for (i=0; i<size; i++) {
		result[i] = str[size-1-i];
	}
	result[size] = NULL;
	printf("결과 문자열 : %s\n", result);
	
	return 0;
}
