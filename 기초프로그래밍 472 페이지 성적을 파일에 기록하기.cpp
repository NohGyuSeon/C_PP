#include <stdio.h>

int main(void)
{
	FILE *fp;
	int number;
	char name[30];
	int score;
	char ch;
	
	// ���� ������ ���� ���� ����.
	fp = fopen("scores.txt", "w");
	if(fp == NULL)
	{
		printf("���� ���� scores.txt�� �� �� �����ϴ�.\n");
		exit(0);
	} 
	do
	{
		printf("\n�й�:");
		scanf("%d", &number);
		
		printf("�̸�:");
		scanf("%s", name);
		
		printf("����:");
		scanf("%f", &score);
		
		fprintf(fp, "%d %s %d", number, name, score);   // ���Ͽ� ����Ѵ�.
		printf("������ �߰��� ���? (y/n):");
		ch = getche();   // ���ڿ츦 �ϸ鼭 �ϳ��� ���ڸ� �Է¹޴� �Լ�		
	} while (ch != 'n');
	
	fclose(fp);
	
	return 0;
 }
