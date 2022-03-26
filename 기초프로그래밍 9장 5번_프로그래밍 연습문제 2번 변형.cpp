#include <stdio.h>
#define SIZE 5

int array[] = { 0 };
int *p = array;

int func(int *p, int size);

int main(void)
{
	scanf("%d %d %d %d %d", p, p+1, p+2, p+3, p+4);
	func(array, SIZE);
	
	return 0;
}

int func(int *p, int size)
{
	int i;
	
	for(i=4; i>=0; i--)
	{
		printf("%d ", *(p+i));
	}
}
