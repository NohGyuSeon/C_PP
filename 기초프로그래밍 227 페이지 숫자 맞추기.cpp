#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// srand(time(NULL))
// rand()
int main(void)
{
	int com, input, count = 0;
	
	srand(time(NULL));
	com = rand() % 100 + 1;
	printf("��ǻ���� ���� = %d\n", com);
	
	while(1) {
	printf("����� ���ڸ� �Է��ϼ���: ");
	scanf("%d", &input);
	count++; 
	if(input == com) {
		printf("�����Դϴ�.\n");
		break;
	}
	else if(input > com) {
		printf("�ٿ�\n");
	}
	else printf("��\n");		
	}
	
	printf("%d���� ���߾����ϴ�.\n", count);
	return 0;
}
