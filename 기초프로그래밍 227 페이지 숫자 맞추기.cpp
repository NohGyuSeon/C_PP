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
	printf("컴퓨터의 숫자 = %d\n", com);
	
	while(1) {
	printf("당신의 숫자를 입력하세요: ");
	scanf("%d", &input);
	count++; 
	if(input == com) {
		printf("정답입니다.\n");
		break;
	}
	else if(input > com) {
		printf("다운\n");
	}
	else printf("업\n");		
	}
	
	printf("%d번에 맞추었습니다.\n", count);
	return 0;
}
