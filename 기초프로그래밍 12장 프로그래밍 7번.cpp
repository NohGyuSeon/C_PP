/******************************************************************
* [프로그래밍] 12장 
* 페이지 486: 7번
* 사용자가 입력하는 텍스트를 파일에 저장하여 주는 프로그램 
* 분반: 10분반 
* 학번: 20182337 
* 이름: 노규선 
********************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp1;
	char file1[100];
	char buffer[1000];

	printf("파일 이름을 입력하시오:  ");
	scanf("%s", file1);	

	if( (fp1 = fopen(file1, "w")) == NULL )
	{
		fprintf(stderr,"파일 %s을 열 수 없습니다.\n", file1);
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
