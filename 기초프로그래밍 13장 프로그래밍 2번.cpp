#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num, i;
	double *ptr, sum = 0;
	
	printf("����� ����: ");
	scanf("%d", &num);
	
	ptr = (double*)malloc(num * sizeof(double));
	if(ptr == NULL)
	{
		printf("�޸� �Ҵ� ���� \n");
		exit(0);
	}

	for(i=0; i<num; ++i)
	{
		printf("�迭�� ��Ҹ� �Է��Ͻÿ�: ");
		scanf("%lf", ptr + i);
		sum += *(ptr + i);
	}
	
	printf("�� = %f \n", sum);
	free(ptr);
	
	return 0;
}


