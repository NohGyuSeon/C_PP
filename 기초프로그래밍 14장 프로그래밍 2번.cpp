/******************************************************************
* [프로그래밍] 14장 
* 페이지 543: 2번
* 정수 2개를 받아서 합계를 반환하는 함수를 포함하는 프로그램  
* 분반: 10분반 
* 학번: 20182337 
* 이름: 노규선 
********************************************************************/

// main.c
#include <stdio.h>

int add(int x, int y);

int main(void)
{
	int sum = add(10, 20);
	printf("합계=%d \n", sum);
	return 0;
}

// add.c
#include <stdio.h>

int add(int x, int y)
{
	return x + y;
}
