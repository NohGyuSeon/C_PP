#include <stdio.h>
#include <math.h>

int main(void)
{
	int i, v;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &v);
	for (i = 1; i <= v; i++) {
		if (v%i == 0)
			printf("%d ", i);
	}
	
	return 0;
}
