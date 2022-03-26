#include<stdio.h>

int main(){
    
	int sum;
	int price;
	int nights;
	
	sum = 0;
	scanf("%d", &nights);
	
	scanf("%d", &price);
	sum = sum + price;

	scanf("%d", &price);
	sum = sum + nights*price;
	
	scanf("%d", &price);
	sum = sum + (nights+1)*price;
	
	printf("%d\n", sum);
	return 0;
}
