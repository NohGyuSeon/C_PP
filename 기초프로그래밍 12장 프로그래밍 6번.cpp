#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp1;
	char file1[100];
	char buffer[1000];
	int line_count = 1, c1;

	printf("���� �̸��� �Է��Ͻÿ�:  ");
	scanf("%s", file1);	

	// ù��° ������ �б� ���� ����.
	if( (fp1 = fopen(file1, "r")) == NULL )
	{
		fprintf(stderr,"���� ���� %s�� �� �� �����ϴ�.\n", file1);
		exit(1);
	}

	// ù��° ������ �ι�° ���Ϸ� �����Ѵ�.
	while(1){
		char *p = fgets(buffer, 1000, fp1);
		if( p == NULL )
			break;
		printf("%d   ", line_count++);
		printf("%s", buffer);
	}
 
	fclose(fp1);
	return 0;
}
