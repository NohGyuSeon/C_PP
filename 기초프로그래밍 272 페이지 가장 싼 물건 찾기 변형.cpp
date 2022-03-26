#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int num[10] = {0};
	srand(time(NULL));
	for(int i = 0; i < 10; i++) {
		num[i] = rand() % 100 + 1;
	}
	for(int i = 0; i < 10; i++) {
		printf("%d ", num[i]);
	}
	printf("\n");
	
	int min_index = 0, min = num[0];
	
	for (int i = 1; i < 10; i++) {
		if(num[i] < min) {
		min = num[i];
		min_index = i;
		}
	}
	
	printf("min = %d, min_index = %d\n", min, min_index);
	
	return 0;
}
