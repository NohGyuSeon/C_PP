#include <stdio.h>

int main(void)
{
	int sum;
	int price;
	int nights;
	
	sum = 0;
	printf("���� �ϼ� : ");
	scanf("%d", &nights);
	
	printf("�װ��� ����  : ");
	scanf("%d", &price);
	sum = sum + price;
	
	printf("ȣ�� 1�� ���� : ");
	scanf("%d", &price);
	sum = sum + nights*price;
	
	printf("�Ϸ翡 �ʿ��� �뵷 : ");
	scanf("%d", &price);
	sum = sum + (nights+1)*price;
	
	printf("�� ���� ��� : %d \n", sum);
	
	return 0;
 } 
