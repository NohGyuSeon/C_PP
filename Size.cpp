/* 변수 = 프로그램이 실행되는 동안 저장한 값이 변경될 
 수 있는공간
 
   상수 =  한 번 정해지면 변경될 필요가 없는 데이터 
*/

#include <stdio.h> 
	
	int main()
{
	int x; 
	x = 5;
	printf("%d ", x);
	printf("변수 x의 메모리 크기는 %d입니다.", sizeof(x));
	
	 
	return 0;
} 
