#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void)
{
	printf("���� ������ ������ �����մϴ�.\n");
	int coin, input;
	srand(time(NULL));
	coin = rand();
	printf("rand() = %d\n", coin);
	coin = coin % 2;
	
	printf("�ո�, �޸��� �Է��Ͻÿ� : �ո� -> 0 �޸� -> 1 \n");
	scanf("%d", &input);
	if (coin == input) {
	 	printf("���� => %s\n", (input) ? "�޸�" : "�ո�");
	}
	else {
		printf("���� => %s\n", (input) ? "�ո�" : "�޸�");	
	}
	
	return 0;
 } 
