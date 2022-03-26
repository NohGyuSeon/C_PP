#include <stdio.h>
#define SIZE 5

int main(void) 
{
	int price[SIZE] = { 0 };
	int i, max = 0, count = 0;
	
	printf("물건 가격(5개): ");
	scanf("%d %d %d %d %d", &price[0], &price[1], &price[2], &price[3], &price[4]);
	
	for (i=0; i<SIZE; i++) {
		if(price[i] > max)
			max = price[i];
	}
	
	for (i=0; i<SIZE; i++) {
		if(price[i] == max)
			count++;
	}
	
	printf("최댓값은 %d이고 %d개입니다.\n", max, count);
	
	return 0;
}
