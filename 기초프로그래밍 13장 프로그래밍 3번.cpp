#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, num;
	double *data;
	double max;
	
	printf("����� ����: ");
	scanf("%d", &num);
	
	data = (double*)calloc(num, sizeof(double));
	
	if (data == NULL)
	{
		printf("�޸� �Ҵ� ���� \n");
		exit(0);
	}
	
	for(i=0; i<num; ++i)
	{
		printf("��� : %d ", i + 1);
		scanf("%lf", data + i);
	}
	max = data[0];
	for(i=1; i<num; ++i)
	{
		if (max < *(data + i))
			max = *(data + i);
	}
	
	printf("�ִ밪 = %f \n", max);
	
	return 0;
}
