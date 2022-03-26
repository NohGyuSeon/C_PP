#include <stdio.h>  // stdio.h -> 입출력 함수에 대한 정보를 지닌 헤더파일 
                   // stdio.h 헤더 파일을 포함시킨다. 
int main(void)   // main() 함수를 정의하는 문장이다. void -> 반환 값 없음 
{   // main 함수의 시작 
	int i, j;   // 정수형 i와 j 선언 
	int gugudan[10][10];   // 'gugudan'이라는 2차원 배열 생성. [10][10] -> 배열 크 
	for (i = 1; i <= 9; i++)   // for문 i는 1부터 9까지 1씩 증가시키는 조건문	 
	{                          // 첫번째 for 함수의 시작 
		printf("\n[ %d단 ]\n\n", i);   // i는 1단부터 시작해서 9단까지 출력. \n은 줄바꿈 
		for(j = 1; j <= 9; j++)   // 이중 for문 사용 -> j는 1부터 9까지 1씩 더해가는 조건 
		{                         // 두번째 for 함수의 시작 
			gugudan[i][j] = i * j;   // i번째 행, j번째 열에 i * j 값 넣어줌 
			printf("%d X %d = %d\n", i, j, gugudan[i][j]);   // 'gugudan' 2차원 배열 화면에 출력 
		}                      // 첫번째 for 함수의 끝 
	}                          // 두번째 for 함수의 끝  
	return 0;     // 정수 값 반환      
 }   // main 함수의 끝 
