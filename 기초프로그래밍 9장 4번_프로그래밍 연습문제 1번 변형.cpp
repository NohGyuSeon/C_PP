#include <stdio.h>
#define SIZE 5

int array[] = { 0 };
int *A = array;

int get_array_sum(int *A, int size);

int main(void)
{
	int result;
	
	scanf("%d %d %d %d %d", A, A+1, A+2, A+3, A+4);
	result = get_array_sum(array, SIZE);
	
	printf("%d", result);
	
	return 0;
}

int get_array_sum(int *A, int size)
{
	int i;
	int sum = 0;
	
	for(i=0; i<SIZE; i++)
	{
		sum += array[i];	
	}
	
	return sum;
}

/*
#include <stdio.h>
#define SIZE 5

int array[SIZE];
int *v = array;

int get_array_sum(int *A, int size)
{
	int i, sum = 0;
	for(i=0; i<size; i++)
	{
		sum += *(A+i);
	}
	
	return sum;
}

int main()
{
	for(int i=0; i<SIZE; i++)
		scanf("%d ", v+i);
	
	printf("%d", get_array_sum(v, SIZE));
	
	return 0;
}
*/
