#include <stdio.h>
#define SIZE 10

void swap(int *px, int *py);

int main(void)
{	
	int array[SIZE] = { 1 };
	int i, j;
	int *p = array;
	int k = 0; 
	 
	while(k<SIZE) {
		scanf("%d ", p+k);	
		if(*(p+k)>=1 && *(p+k)<=50) {
			k++;
		}
		continue;
	}
	
	for(i=0; i<SIZE; i++) {
		for(j=0; j<SIZE-1-i; j++) {
			swap(p+j, p+j+1);
		}
	}
	printf("%d %d %d %d %d %d %d %d %d %d", *p, *(p+1), *(p+2), *(p+3), *(p+4), *(p+5), *(p+6), *(p+7), *(p+8), *(p+9));
	
	return 0;
}

void swap(int *px, int *py)
{
	int tmp;
	int a, b; 
	
	a = *px;
	b = *py;
	
	if(a > b)
	{
		tmp = *px;
		*px = *py;
		*py = tmp;
	}
}
