#include <stdio.h>
int main(void)
{
	char ans1;
	int ans2;
	int seats[10] = { 0 };
	while (1)
	{
		printf("�¼��� �����Ͻðڽ��ϱ�?(y �Ǵ� n) ");
		scanf(" %c", &ans1);

		if (ans1 == 'y' || ans1 == 'Y')
		{
			printf("���° �¼��� �����Ͻðڽ��ϱ�?");
			scanf("%d", &ans2);
			if (ans2 >= 1 && ans2 <= 10)
				if (seats[ans2 - 1] == 0)
				{
					seats[ans2 - 1] = 1;
					printf("����Ǿ����ϴ�.\n");
				}
				else
				{
					printf("�̹� ����� �ڸ��Դϴ�. �ٸ� �¼��� �����ϼ���\n");
				}
			int i;

			printf("-------------------------------\n");
			printf("  1  2  3  4  5  6  7  8  9  10\n");
			printf("-------------------------------\n");

			for (i = 0; i < 10; i++)
			{
				printf("  %d", seats[i]);
			}
			printf("\n");
		}
		else break;
	}
	return 0;
}
