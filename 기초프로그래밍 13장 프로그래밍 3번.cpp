#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, num;
	double *data;
	double max;
	
	printf("요소의 개수: ");
	scanf("%d", &num);
	
	data = (double*)calloc(num, sizeof(double));
	
	if (data == NULL)
	{
		printf("메모리 할당 오류 \n");
		exit(0);
	}
	
	for(i=0; i<num; ++i)
	{
		printf("요소 : %d ", i + 1);
		scanf("%lf", data + i);
	}
	max = data[0];
	for(i=1; i<num; ++i)
	{
		if (max < *(data + i))
			max = *(data + i);
	}
	
	printf("최대값 = %f \n", max);
	
	return 0;
}
