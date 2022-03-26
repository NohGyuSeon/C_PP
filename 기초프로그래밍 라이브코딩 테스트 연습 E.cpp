#include <stdio.h>

int main(void)
{
	int N, M = 0, R;
	scanf("%d", &N);
	
	while(N) {
		R = N % 10;
		M = 10 * M + R;
		N = N / 10;
	}
	
	while(M) {
		printf("%d\n", M%10);
		M = M/10;	
	}
	
	return 0;
}

