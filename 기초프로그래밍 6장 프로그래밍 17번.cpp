#include <stdio.h>
int main()
{
	int n, i, flag = 0;

	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	for (i = 2; i <= n / 2; ++i)
	{
		if (n%i == 0)
		{
			flag = 1;
			break;
		}
	}

	if (flag == 0)
		printf("%d은 소수입니다. \n", n);
	else
		printf("%d은 소수가 아닙니다. \n", n);

	return 0;
}
