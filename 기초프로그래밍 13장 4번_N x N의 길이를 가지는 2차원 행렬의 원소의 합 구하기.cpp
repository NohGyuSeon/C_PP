#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, N, sum = 0;
	int **ptr;
	
	scanf("%d", &N);
	
	ptr = (int **)malloc(N * sizeof(int *));   // ���� ����(N)��ŭ �����Ҵ�
 
	for(i=0; i<N; i++)
	{
		ptr[i] = (int *)malloc(N * sizeof(int));   // ���� ����(N)��ŭ �����Ҵ�
	}
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			scanf("%d", &ptr[i][j]);	
		}
	}
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			sum += ptr[i][j];
		}
	}
	
	printf("%d", sum);
	
	for(i=0; i<N; i++)
	{
		free(ptr[i]);
	}
	
	free(ptr);

	return 0;
}  
