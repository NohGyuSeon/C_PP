#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2, i, count = 0;
	int *ptr1, *ptr2, sum = 0;
	scanf("%d", &num1);

	ptr1 = (int *)malloc(num1 * sizeof(int));
		
	for(i=0; i<num1; i++)
	{
		scanf("%d", ptr1 + i);	
	}
	
	scanf("%d", &num2);
	
	ptr2 = (int *)malloc(num2 * sizeof(int));
		
	for(i=0; i<num2; i++)
	{
		scanf("%d", ptr2 + i);		
	}
	

	for(i=0; i<num1; i++)
	{
		for(int j=0; j<num2; j++)
		{
			if(*(ptr2 + j) == *(ptr1 + i))
			{
				count++;
			}
		}
	}
	
	printf("%d", count);

	free(ptr1);
	free(ptr2);
	
	return 0;
}
