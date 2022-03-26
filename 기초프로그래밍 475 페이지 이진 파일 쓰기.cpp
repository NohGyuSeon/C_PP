#include <stdio.h>
#define SIZE 10

int main(void)
{
	int buffer[SIZE] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	FILE *fp = NULL;
	
	fp = fopen("binary.bin", "wb");
	if(fp == NULL)
	{
		fprintf(stderr, "binary.bin ������ �� �� �����ϴ�.");
		return 1;
	}
	
	fwrite(buffer, sizeof(int), SIZE, fp);
	fclose(fp);
	
	return 0;
}
