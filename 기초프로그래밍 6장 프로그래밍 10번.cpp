#include <stdio.h>
int main(void)
{
	int i, ctemp;
	printf("======================\n");
	printf("ȭ���µ�      �����µ�\n");
	printf("======================\n");
	for(i=0;i<=100;i++)
	{
		ctemp = (i-32)*5.0/9.0;
		printf("%d      %d\n", i, ctemp);
	}
	return 0;
}
