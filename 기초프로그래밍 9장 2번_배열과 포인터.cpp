#include <stdio.h>
#define SIZE 5

int array[SIZE] = { 0 };
int *p = array;
void get_sum(int a, int b, int c, int d, int e);

int main(void)
{
	scanf("%d %d %d %d %d", p, p+1, p+2, p+3, p+4);
	get_sum(*p, *(p+1), *(p+2), *(p+3), *(p+4));
	
	return 0;
}

void get_sum(int a, int b, int c, int d, int e)
{
	int sum = 0;
	sum = a + b + c + d + e;
	
	printf("%d", sum);
}

/*
#include <stdio.h>
#define SIZE 5

int main()
{
	int array[SIZE];
	int *pt = array;

	int i;
	int sum = 0;
	for(i=0; i<SIZE; i++)
	{
		scanf("%d ", pt+i);
		sum += *(pt+i);		
	}
	
	printf("%d", sum);
	
	return 0;
}
*/
