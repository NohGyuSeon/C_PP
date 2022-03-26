#include <stdio.h>

int main(void)
{
	int i, k, value;
	for(i=0; i<10; i++)
	{
		printf("데이터를 입력하시오 : ");
		scanf("%d", &value);
		for(k=0; k<=value; k++)
			printf("*");
		printf("\n");
	}
	
	return 0;
}
