/******************************************************************
* [프로그래밍] 12장 
* 페이지 485: 3번
* 텍스트 파일 안에 들어있는 라인의 개수를 계산하는 프로그램 
* 분반: 10분반   
* 학번: 20182337 
* 이름: 노규선 
********************************************************************/

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main(void)
{
	FILE *f;
	char ch;
	int line = 0, word = 0;

	f = fopen("sample", "r");
	while((ch=getc(f)) != EOF)
	{
		if(ch == '\n')
			line++;
		putchar(ch);
	}
	fclose(f);
	printf("\n라인의 개수=%d\n",line);
	
	return 0;
}

