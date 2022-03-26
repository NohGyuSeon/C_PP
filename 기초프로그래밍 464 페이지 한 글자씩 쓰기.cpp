#include <stdio.h>

int main(void)
{
	FILE *fp = NULL;
	
	fp = fopen("alphabet.txt", "w");   // ������ ���� ���� ����.
	
	if(fp == NULL)
	{ 
		fprintf(stderr, "���� alphabet.txt�� �� �� �����ϴ�.\n");
		exit(1);   // ���α׷��� �����Ѵ�.	
	}	
	
	char c;
	for (c='a'; c<='z'; c++)   // 'a'���� 'z'���� ���Ͽ� ����.
	{
		fputc(c, fp);
	}
	
	fclose(fp);
	
	return 0;
} 
