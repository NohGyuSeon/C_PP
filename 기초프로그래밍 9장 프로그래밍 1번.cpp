#include <stdio.h>

void print_array(int *A, int size)
{
	int i;
	printf("print_array() \n");
	for (i=0; i<size; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
}

int get_array_sum(int *A, int size)
{
	int i;
	int sum = 0;
	for(i=0; i<size; i++) {
		sum += *(A + i); 
	}
	
	return sum;
}

int main(void)
{
	int data[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	
	print_array(data, 10);
	int sum = get_array_sum(data, 10);
	printf("배열 요소의 합 = %d\n", sum);
	
	return 0;
}

