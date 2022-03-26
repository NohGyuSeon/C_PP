#include <stdio.h>

void modify(int *ptr)
{
	*ptr = 99;	
}

int main(void)
{
	int number = 1;
	
	modify(&number); // 주소를 계산해서 보낸다.
	printf("number = %d\n", number);
	
	return 0;
}
