#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num, i;
	double *ptr, sum = 0;
	
	printf("요소의 개수: ");
	scanf("%d", &num);
	
	ptr = (double*)malloc(num * sizeof(double));
	if(ptr == NULL)
	{
		printf("메모리 할당 실패 \n");
		exit(0);
	}

	for(i=0; i<num; ++i)
	{
		printf("배열의 요소를 입력하시오: ");
		scanf("%lf", ptr + i);
		sum += *(ptr + i);
	}
	
	printf("합 = %f \n", sum);
	free(ptr);
	
	return 0;
}


