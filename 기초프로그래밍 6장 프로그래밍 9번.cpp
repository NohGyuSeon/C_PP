#include <stdio.h>
#include <math.h>

int main(void)
{
	int i, v;
	printf("정수를 입력하시오: ");
	scanf("%d", &v);
	for (i = 1; i <= v; i++) {
		if (v%i == 0)
			printf("%d ", i);
	}
	
	return 0;
}
