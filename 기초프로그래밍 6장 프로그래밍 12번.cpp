#include <stdio.h>

int main(void)
{
	int i, k, value;
	for(i=0; i<10; i++)
	{
		printf("�����͸� �Է��Ͻÿ� : ");
		scanf("%d", &value);
		for(k=0; k<=value; k++)
			printf("*");
		printf("\n");
	}
	
	return 0;
}
