#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp1;
	char file1[100];
	char buffer[1000];
	int line_count = 1, c1;

	printf("파일 이름을 입력하시오:  ");
	scanf("%s", file1);	

	// 첫번째 파일을 읽기 모드로 연다.
	if( (fp1 = fopen(file1, "r")) == NULL )
	{
		fprintf(stderr,"원본 파일 %s을 열 수 없습니다.\n", file1);
		exit(1);
	}

	// 첫번째 파일을 두번째 파일로 복사한다.
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
