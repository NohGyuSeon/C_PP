#include <stdio.h>

int main(void)
{
	
	int i, n, sum;
	
	printf("���� �Է��Ͻÿ� :");
	scanf("%d", &n);
	
	i = 1;
	sum = 0;
	 
	while(i <= n)
	{
		sum += i;
		i++;
	}
	printf("���� %d�Դϴ�.\n", sum);
	
	return 0;
}
