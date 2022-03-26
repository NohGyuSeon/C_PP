#include <stdio.h>

int main(void)
{
	
	int i, n, sum;
	
	printf("값을 입력하시오 :");
	scanf("%d", &n);
	
	i = 1;
	sum = 0;
	 
	while(i <= n)
	{
		sum += i;
		i++;
	}
	printf("합은 %d입니다.\n", sum);
	
	return 0;
}
