#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main(void)
{
	int data[SIZE] = { 0 };		
	int i;

	for (i = 0; i < 5; i++) {
		printf("정수를 입력하시오: ");
		scanf("%d", &data[i]);
	}
	int max, min;
	max= min = data[0];
	for (i = 1; i < 5; i++) {
		if (data[i] > max) max = data[i];
		if (data[i] < min) min = data[i];
	}
	printf("최대값=%d 최소값=%d \n", max, min);
	 
	return 0;
}
