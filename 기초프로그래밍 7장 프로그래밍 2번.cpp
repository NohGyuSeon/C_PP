#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main(void)
{
	int data[SIZE] = { 0 };		
	int i;

	for (i = 0; i < 5; i++) {
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &data[i]);
	}
	int max, min;
	max= min = data[0];
	for (i = 1; i < 5; i++) {
		if (data[i] > max) max = data[i];
		if (data[i] < min) min = data[i];
	}
	printf("�ִ밪=%d �ּҰ�=%d \n", max, min);
	 
	return 0;
}
