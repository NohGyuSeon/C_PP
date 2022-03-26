#include <stdio.h>
#define SIZE 10

int main(void)
{
	int array[SIZE];
	int odd_idx = 0;
	int even_idx = 0;
	int i, n;
	
	for(i=0; i<SIZE; i++) {
		scanf("%d", &n);
		
		if(n % 2 == 0) {
			array[even_idx] = n;
			even_idx ++;
		}
		else {
			array[odd_idx] = n;
			odd_idx ++;
		}
	}
	
	for(int i = 0; i <= 10; i++) {
		printf("%d ", array[i]);
	}
	
	return 0;
}

/*
#include <stdio.h>
#define SIZE 10

int main(void)
{
	int array[SIZE];
	int i;
	
	for(i=0; i<SIZE; i++) {
		scanf("%d", &array[i]);
	}
	
	for(i=0; i<SIZE; i++) {
		if (array[i] % 2 == 1)
		{
			printf("%d ", array[i]);
		}
	}
	
	for(i=SIZE-1; i>=0; i--) {
		if (array[i] % 2 == 0)
		{
			printf("%d ", array[i]);
		}
	}
	
	return 0;
}
*/
