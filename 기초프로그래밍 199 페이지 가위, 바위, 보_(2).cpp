#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int user, computer;
	
	printf("가위, 바위, 보 게임에 오신 것을 환영합니다.\n\n");
	printf("하나를 선택하세요 (가위= 0,바위= 1,보= 2) : ");
	scanf("%d", &user);
	
	srand(time(NULL));
	computer = rand() % 3;
	printf("사용자 = %d \n", user);
	printf("컴퓨터 = %d \n", computer);
	
	if (( user + 1) == computer)
		printf("컴퓨터 승리 \n"); 
	else if (( user ) == computer)
		printf("비겼음 \n");
	else
		printf("사용자 승리 \n");
		
	return 0;
 }
 
 // 단, 사용자가 보를 냈을때 컴퓨터가 이길 확률을 없음. 
