#include <stdio.h>

#define DEBUG

double calc_array_avg(int *a, int size)
{
#ifdef DEBUG
	printf("calc_array_avg() \n");
	for(int i=0; i<size; i++)
	{
		printf("%d", a[i]);
	printf("\n");
#endif
	double sum = 0;
	for (int i=0; i<size; i++)
	{
		sum += a[i];
#ifdef DEBUG
	printf("%d를 더하는 중 \n", a[i]);
#endif
	}
	double avg = sum / size;
#ifdef DEBUG
	printf("평균 = %f", avg);
#endif
	return avg;
}

int main(void)
{
#ifdef DEBUG
	printf("배열의 평균을 계산합니다. \n");
#endif
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	double avg = calc_array_avg(a, 10);
	printf("배열의 평균 = %f \n", avg);
	
	return 0;
}
