/******************************************************************
* [���α׷���] 12�� 
* ������ 486: 7��
* ����ڰ� �Է��ϴ� �ؽ�Ʈ�� ���Ͽ� �����Ͽ� �ִ� ���α׷� 
* �й�: 10�й� 
* �й�: 20182337 
* �̸�: ��Լ� 
********************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp1;
	char file1[100];
	char buffer[1000];

	printf("���� �̸��� �Է��Ͻÿ�:  ");
	scanf("%s", file1);	

	if( (fp1 = fopen(file1, "w")) == NULL )
	{
		fprintf(stderr,"���� %s�� �� �� �����ϴ�.\n", file1);
		exit(1);
	}

	while(1){
		char *p= gets(buffer);
		if( p == NULL )
			break;
		fprintf(fp1, "%s\n", buffer);
	}

	fclose(fp1);
	return 0;
}
