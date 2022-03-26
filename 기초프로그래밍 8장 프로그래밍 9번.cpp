#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int user, com;
	
	while(1) {
		printf("앞(0) 또는 뒤(1)를 선택하시오(종료는 - 1) : ");
		scanf("%d", &user);
		if(user == -1) break;
		com = rand()%2;
		if(user == com)
			printf("사용자가 이겼습니다.\n");
		else
			printf("컴퓨터가 이겼습니다.\n");	
	} 
	
	return 0; 
}
