#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp1, *fp2;
	char file1[100], file2[100];
	
	printf("첫번째 파일 이름: ");
	scanf("%s", file1);
	
	printf("두번째 파일 이름: ");
	scanf("%s", file2);
	
	// 첫번째 파일을 읽기 모드로 연다.
	if((fp1 = fopen(file1, "r")) == NULL)
	{
		fprintf(stderr, "원본 파일 %s를 열 수 없습니다.\n", file1);
		exit(1);
	} 
	
	// 두번째 파일을 읽기 모드로 연다.
	if((fp2 = fopen(file2, "r")) == NULL)
	{
		fprintf(stderr, "원본 파일 %s를 열 수 없습니다.\n", file2);
		exit(1);
	}
	
	// 첫 번째 파일과 두 번째 파일을 비교
	while(1)
	{
		int c1 = fgetc(fp1);
		int c2 = fgetc(fp2);
		if( c1 == EOF || c2 == EOF )
			break;
		if( c1 != c2 ) {
			printf("두 파일은 서로 다릅니다.\n");
			return 0;
		}
	}
	printf("두 파일은 서로 같습니다.\n");

	fclose(fp1);
	fclose(fp2);

	return 0;
}


