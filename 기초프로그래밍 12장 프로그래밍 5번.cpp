#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp1, *fp2;
	char file1[100], file2[100];
	
	printf("ù��° ���� �̸�: ");
	scanf("%s", file1);
	
	printf("�ι�° ���� �̸�: ");
	scanf("%s", file2);
	
	// ù��° ������ �б� ���� ����.
	if((fp1 = fopen(file1, "r")) == NULL)
	{
		fprintf(stderr, "���� ���� %s�� �� �� �����ϴ�.\n", file1);
		exit(1);
	} 
	
	// �ι�° ������ �б� ���� ����.
	if((fp2 = fopen(file2, "r")) == NULL)
	{
		fprintf(stderr, "���� ���� %s�� �� �� �����ϴ�.\n", file2);
		exit(1);
	}
	
	// ù ��° ���ϰ� �� ��° ������ ��
	while(1)
	{
		int c1 = fgetc(fp1);
		int c2 = fgetc(fp2);
		if( c1 == EOF || c2 == EOF )
			break;
		if( c1 != c2 ) {
			printf("�� ������ ���� �ٸ��ϴ�.\n");
			return 0;
		}
	}
	printf("�� ������ ���� �����ϴ�.\n");

	fclose(fp1);
	fclose(fp2);

	return 0;
}


