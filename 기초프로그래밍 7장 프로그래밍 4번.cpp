#include <stdio.h>
int main(void)
{
	int gugu[10][10];
	int i, k;

	for (i = 1; i<=9; i++) {
		for (k = 1; k<=9; k++) {
			gugu[i][k] = i*k;
		}
	}
	printf("�˰���� �������� �Է��Ͻÿ�(��: 9 3): ");
	int n, m;
	scanf("%d %d", &n, &m);
	printf("%dX%d = %d \n", n, m, gugu[n][m]);

	return 0;
}
