#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	long length;
	
	FILE *fp = fopen("d:\\lena(256x256).raw", "rb");
	if(fp == NULL)
	{
		printf("lena.raw ������ �� �� �����ϴ�.");
		exit(1);
	}
	fseek(fp, 0, SEEK_END);
	
	length = ftell(fp);
	printf("���� ũ�� = %d ����Ʈ \n", length);
	fclose(fp);
	
	return 0;
 } 
