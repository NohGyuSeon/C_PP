#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp1, *fp2;
	char file1[100], file2[100];
	char buffer1[1000], buffer2[1000];

	printf("ù��° ���� �̸�:  ");
	scanf("%s", file1);	

	printf("�ι�° ���� �̸�:  ");
	scanf("%s", file2);	

	// ù��° ������ �б� ���� ����.
	if( (fp1 = fopen(file1, "r")) == NULL )
	{
		fprintf(stderr,"���� ���� %s�� �� �� �����ϴ�.\n", file1);
		exit(1);
	}

	// �ι�° ������ �б� ���� ����.
	if( (fp2 = fopen(file2, "r")) == NULL )
	{
		fprintf(stderr,"���� ���� %s�� �� �� �����ϴ�.\n", file2);
		exit(1);
	}

	// ù��° ������ �ι�° ���Ϸ� �����Ѵ�.
	while( 1 )
	{
		char *p1 = fgets(buffer1, 1000, fp1);
		char *p2 = fgets(buffer2, 1000, fp2);
		if( p1 == NULL || p2 == NULL )
			break;
		if( strcmp(buffer1, buffer2) != 0 ) 
		{
			printf("<< %s", buffer1);
			printf(">> %s", buffer2);
		}
	}
 
	fclose(fp1);
	fclose(fp2);

	return 0;
}
