#include <stdio.h>
#include <math.h>
#define SIZE 5

int data[SIZE] = { 0 };	
int *v = data;

double get_array_avg(int *v, int n);
double get_array_std(int *v, double avg, int n);

int main(void)
{
	double result_avg, result_std;
	
	scanf("%d %d %d %d %d", v, v+1, v+2, v+3, v+4);
	
	result_avg = get_array_avg(data, SIZE);
	result_std = get_array_std(data, result_avg, SIZE);

	printf("%.2f ", result_avg);
	printf("%.2f", result_std);
	
	return 0;	
} 

double get_array_avg(int *v, int n)
{
	int i;
	double sum = 0.0;
	
	for(i=0; i<n; i++)
	{
		sum += data[i];
	}
	return sum / n;
}

double get_array_std(int *v, double avg, int n)
{
	int i;
	double k = 0;
	double sd = 0.0;
	
	for(i=0; i<n; i++)
	{
		k += (data[i] - avg) * (data[i] - avg);
	}
	
	sd = k / n;

	return sqrt(sd);
}



