#include <stdio.h>

int main(void)
{
	int income;
	int tax;
	printf("���� ǥ���� �Է��Ͻÿ�(����) : ");
	scanf("%d", &income);
	
	if ( income <= 1000)
		tax = income * 0.08;
	else if ( income <= 4000)
		tax = 1000*0.08 + (income-1000)*0.17;
	else if ( income <= 8000)
		tax = 1000*0.08 + 4000*0.17 + (income-4000)*0.26;
	else
		tax = 1000*0.08 + 4000*0.17 + 8000*0.26 + (income-8000)*0.35;
		
	printf("�ҵ漼�� %d�����Դϴ�.\n", tax);
	
	return 0;
}
