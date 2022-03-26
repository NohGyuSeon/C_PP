#include <stdio.h>
int main(void)
{
	int i, ctemp;
	printf("======================\n");
	printf("È­¾¾¿Âµµ      ¼·¾¾¿Âµµ\n");
	printf("======================\n");
	for(i=0;i<=100;i++)
	{
		ctemp = (i-32)*5.0/9.0;
		printf("%d      %d\n", i, ctemp);
	}
	return 0;
}
