#include <stdio.h>

int main(void)
{
	int i, n;
	long long fact = 1;
	
	printf("n�� �Է��ϼ���: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++) {
		fact = fact * i;
	}
	
	printf("%d!�� %d�Դϴ�.\n", n, fact);
	
	return 0;
 } 
