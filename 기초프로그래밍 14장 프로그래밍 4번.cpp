/******************************************************************
* [프로그래밍] 14장 
* 페이지 544: 4번
* 배열에 관한 각종 연산을 포함하는 함수를 포함하는 프로그램 
* 분반: 10분반 
* 학번: 20182337 
* 이름: 노규선 
********************************************************************/

// array.c
#include <stdio.h>
#include "array.h"

void print_array(int *a, int size)
{
	printf("[ ");
	for (int i = 0; i < size; i++)
		printf("%d ", a[i]);
	printf(" ]\n");
}

int get_sum_of_array(int *a, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++) 
		sum += a[i];
	return sum;
}

// array.h
#pragma once
void print_array(int *a, int size);
int get_sum_of_array(int *a, int size);

// main.c
#include <stdio.h>
#include "array.h"

int main(void)
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	print_array(a, 10);
	int sum = get_sum_of_array(a, 10);
	printf("배열 요소들의 합=%d\n", sum);

	return 0;
}
