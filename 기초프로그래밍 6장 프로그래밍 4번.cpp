#include <stdio.h>

int main(void)
{
	int i, sum = 0;
	while (1) {
		printf("정수를 입력하시오: ");
		scanf("%d", &i);
		if (i == 0) break;
		sum += i;
	}
	printf("합계=%d \n", sum);
	
	return 0;
}
