#include <stdio.h>

int main(void)
{
	int i, n;
	long long fact = 1;
	
	printf("n을 입력하세요: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++) {
		fact = fact * i;
	}
	
	printf("%d!는 %d입니다.\n", n, fact);
	
	return 0;
 } 
