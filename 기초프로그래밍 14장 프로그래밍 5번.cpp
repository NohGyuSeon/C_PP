#include <stdio.h>

void main(int argc, char *argv[])
{
	FILE *fp1, *fp2;
	char ch;
	int pos;
	
	if((fp1 = fopen(argv[1], "r")) == NULL)
	{
		printf("�б� ������ �� �� �����ϴ�. \n");
		return;
	}
	if((fp2 = fopen(argv[2], "w")) == NULL)
	{
		printf("���� ������ �� �� �����ϴ�.\n");
		return;
	}
	fseek(fp1, 0L, SEEK_END);
	pos = ftell(fp1);
	fseek(fp1, 0L, SEEK_SET);
	while (pos--)
	{
		ch = fgetc(fp1);
		fputc(ch, fp2);
	}
	printf("%s�� %s�� �����Ͽ��� \n", argv[1], argv[2]);
	fclose(fp1);
	fclose(fp2);
	
	return 0;
}
