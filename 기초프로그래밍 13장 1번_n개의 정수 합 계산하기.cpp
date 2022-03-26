#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num, i;
	int *ptr, sum = 0;
	scanf("%d", &num);
	
	
	ptr = (int *)malloc(num * sizeof(int));
	
	
	for(i=0; i<num; i++)
	{
		scanf("%d", ptr + i);		
		sum += *(ptr + i);
	}
	
	printf("%d ", sum);
	free(ptr);
	
	return 0;
}
