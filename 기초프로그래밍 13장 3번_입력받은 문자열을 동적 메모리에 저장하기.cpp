#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int n, count = 0;
	char *pStr;
	
	scanf("%d", &n);
	pStr = (char *)malloc(n * sizeof(char));
	
	scanf(" %[^\n]s", pStr);   // pStr : ���ڿ��� �Է¹޴� ������
	int lenth = strlen(pStr);
	
	for(int i=0; i<lenth; i++)
	{ 
		count++;	
	}
	
	printf("%d", count);
	
	return 0;
}
