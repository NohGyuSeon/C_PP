#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int user, com;
	
	while(1) {
		printf("��(0) �Ǵ� ��(1)�� �����Ͻÿ�(����� - 1) : ");
		scanf("%d", &user);
		if(user == -1) break;
		com = rand()%2;
		if(user == com)
			printf("����ڰ� �̰���ϴ�.\n");
		else
			printf("��ǻ�Ͱ� �̰���ϴ�.\n");	
	} 
	
	return 0; 
}
