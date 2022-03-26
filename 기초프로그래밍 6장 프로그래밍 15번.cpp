#include <stdio.h>

int main(void)
{
	int count = 0;
	while (1) {
		printf("문자를 입력하시오: (종료 .)");
		char c = getchar();
		getchar(); // 엔터키를 없앤다. 
		if (c == 'a')
			count++;
		if (c == '.')
			break;
	}
	printf("a의 개수 = %d \n", count);
	return 0;
}
