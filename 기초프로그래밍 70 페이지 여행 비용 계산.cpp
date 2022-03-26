#include <stdio.h>

int main(void)
{
	int sum;
	int price;
	int nights;
	
	sum = 0;
	printf("여행 일수 : ");
	scanf("%d", &nights);
	
	printf("항공권 가격  : ");
	scanf("%d", &price);
	sum = sum + price;
	
	printf("호텔 1박 가격 : ");
	scanf("%d", &price);
	sum = sum + nights*price;
	
	printf("하루에 필요한 용돈 : ");
	scanf("%d", &price);
	sum = sum + (nights+1)*price;
	
	printf("총 여행 비용 : %d \n", sum);
	
	return 0;
 } 
