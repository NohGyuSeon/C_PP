#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int user, computer;
	
	printf("����, ����, �� ���ӿ� ���� ���� ȯ���մϴ�.\n\n");
	printf("�ϳ��� �����ϼ��� (����= 0,����= 1,��= 2) : ");
	scanf("%d", &user);
	
	srand(time(NULL));
	computer = rand() % 3;
	printf("����� = %d \n", user);
	printf("��ǻ�� = %d \n", computer);
	
	if (( user + 1) == computer)
		printf("��ǻ�� �¸� \n"); 
	else if (( user ) == computer)
		printf("����� \n");
	else
		printf("����� �¸� \n");
		
	return 0;
 }
 
 // ��, ����ڰ� ���� ������ ��ǻ�Ͱ� �̱� Ȯ���� ����. 
