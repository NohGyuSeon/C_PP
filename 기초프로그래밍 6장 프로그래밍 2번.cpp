#include <stdio.h>

int main(void)
{
	int n, i;
	printf("몇 번이나 반복할까요?: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("안녕하세요? \n");
	}
	return 0;
}
