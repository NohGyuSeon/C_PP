#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE *fp;
	char str[100];
	
	fp = fopen("file.txt", "w");
	if(fp == NULL)
	{
		fprintf(stderr, "���� file.txt�� �� �� �����ϴ�.\n");
		exit(0);
	}
	do
	{
		gets(str);   // ����ڷκ��� �� ���� �޴´�. 
		fputs(str, fp);   // �� ���� ���Ͽ� ����. 
	} while (strlen(str) != 0);
	
	fclose(fp);
	
	return 0;
 } 
