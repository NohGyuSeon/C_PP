#include <stdio.h>
int main()
{
	int n, i, flag = 0;

	printf("������ �Է��Ͻÿ�: ");
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
		printf("%d�� �Ҽ��Դϴ�. \n", n);
	else
		printf("%d�� �Ҽ��� �ƴմϴ�. \n", n);

	return 0;
}
