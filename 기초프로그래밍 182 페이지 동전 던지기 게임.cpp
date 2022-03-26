#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void)
{
	printf("동전 던지기 게임을 시작합니다.\n");
	int coin, input;
	srand(time(NULL));
	coin = rand();
	printf("rand() = %d\n", coin);
	coin = coin % 2;
	
	printf("앞면, 뒷면을 입력하시오 : 앞면 -> 0 뒷면 -> 1 \n");
	scanf("%d", &input);
	if (coin == input) {
	 	printf("성공 => %s\n", (input) ? "뒷면" : "앞면");
	}
	else {
		printf("실패 => %s\n", (input) ? "앞면" : "뒷면");	
	}
	
	return 0;
 } 
