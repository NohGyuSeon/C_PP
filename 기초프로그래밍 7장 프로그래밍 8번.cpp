#include <stdio.h>
#include <math.h>
#define MAX_SIZE 10
int main(void)
{
	int i;
	double data[MAX_SIZE];
	double sum = 0.0, avg, sd;

	for(i=0; i<MAX_SIZE; i++){
		printf("�Ǽ��� �Է��Ͻÿ�: ");
		scanf("%lf", &data[i]);
	}
	sum = 0.0;
	for(i=0; i<MAX_SIZE; i++){
		sum += data[i];
	}
	avg = sum/MAX_SIZE;
	printf("���:%f\n", avg);

	sum = 0.0;
	for(i=0; i<MAX_SIZE; i++){
		sum += (data[i]-avg)*(data[i]-avg);
	}
	sd = sum/MAX_SIZE;
	printf("ǥ������:%f\n", sqrt(sd));
	
	return 0;
}
