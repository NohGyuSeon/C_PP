#include <stdio.h>

int mian(void)
{
	FILE *fp = NULL;
	int c;   // ���� ������ �����Ѵ�.
	
	fp = fopen("alphabet.txt", "r");
	if(fp == NULL) 
	{
		fprintf(stderr, "���� ���� alphabet.txt�� �� �� �����ϴ�.\n");
		exit(1); 
	}
	
	while ((c = fgetc(fp)) != EOF)
		putchar(c);
		
	fclose(fp);
	
	return 0;
}
