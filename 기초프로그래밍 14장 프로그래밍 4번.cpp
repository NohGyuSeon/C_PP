/******************************************************************
* [���α׷���] 14�� 
* ������ 544: 4��
* �迭�� ���� ���� ������ �����ϴ� �Լ��� �����ϴ� ���α׷� 
* �й�: 10�й� 
* �й�: 20182337 
* �̸�: ��Լ� 
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
	printf("�迭 ��ҵ��� ��=%d\n", sum);

	return 0;
}
