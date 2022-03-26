#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE *fp;
	char str[100];
	
	fp = fopen("file.txt", "w");
	if(fp == NULL)
	{
		fprintf(stderr, "파일 file.txt를 열 수 없습니다.\n");
		exit(0);
	}
	do
	{
		gets(str);   // 사용자로부터 한 줄을 받는다. 
		fputs(str, fp);   // 한 줄을 파일에 쓴다. 
	} while (strlen(str) != 0);
	
	fclose(fp);
	
	return 0;
 } 
