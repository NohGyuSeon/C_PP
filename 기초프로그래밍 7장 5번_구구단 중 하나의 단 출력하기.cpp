#include <stdio.h>

int main(void)
{
	int gugudan[10][10];
	int i, j, k;
		
	for (i=1; i<=9; i++) {
		for (j=1; j<=9; j++) {
			gugudan[i][j] = i*j;
		}
	}
	
	printf("������ �� �˰���� ��: ");
	scanf("%d", &k);
	
	for (j=1; j<=9; j++) {
		printf("%d X %d = %d \n", k, j, gugudan[k][j]);
	}
	
	/*
	int k;
	printf("������ �� �˰���� ��: ");
	scanf("%d", &k);

	for (int i=1; i<=9; i++) {	
			printf("%d X %d = %d \n", k, i, k*i);
	}
	*/
	
	return 0;
 } 
