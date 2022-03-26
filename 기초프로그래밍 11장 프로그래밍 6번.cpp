#include <stdio.h>
enum game { scissor, rock, paper };

int main(void)
{
	enum game computer = scissor;   // 가위
	enum game user = scissor;
	printf("가위(0), 바위(1), 보(2)를 입력하세요 : ");
	scanf("%d", &user);
	
	if( user == scissor )
		printf("비겼습니다.\n");
	else if( user == rock)
		printf("컴퓨터가 졌습니다.\n");
	else
		printf("컴퓨터가 이겼습니다.\n");
		
	return 0;
}
