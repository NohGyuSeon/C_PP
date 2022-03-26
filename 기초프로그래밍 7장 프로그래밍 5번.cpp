#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

#define SIZE 5

int main(void)
{
	int data[100] = { 0 };
	int i, k;
	srand(time(NULL));

	for (i = 0; i < 100; i++) {
		data[rand() % 10]++;
	}
	int max = data[0];
	int index = 0;
	for (i = 1; i < 100; i++) {
		if (data[i] > max) {
			max = data[i];
			index = i;
		}
	}
	printf("가장 많이 생성된 수 = %d \n", index);
	
	return 0;
}
