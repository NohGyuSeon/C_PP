#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int *p;
	int i, items = 100;
	
	srand(time(NULL));
	p = (int*)malloc(sizeof(int)*items);
	
	for(i=0; i<items; i++)
	{
		p[i] = rand()%100;
	}
	int sum = 0;
	for(i=0; i<items; i++)
	{
		sum += p[i];
	}
	printf("ЦђБе = %d \n", sum/items);
	free(p);
	
	return 0;
 } 
