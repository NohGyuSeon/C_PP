#include <stdio.h>

int main(void)
{
	int i, sum = 0;
	while (1) {
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &i);
		if (i == 0) break;
		sum += i;
	}
	printf("�հ�=%d \n", sum);
	
	return 0;
}
