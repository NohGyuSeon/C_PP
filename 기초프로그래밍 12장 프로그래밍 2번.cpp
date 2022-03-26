#include <stdio.h>

int main(void)
{
	int number, sum, count;
	double average;
	FILE *in, *f;
	char ch;
	
	in = fopen ("numbers", "r");
	sum = 0;
	count = 0;
	
	while (fscanf (in, "%d", &number) == 1)
	{
		sum = sum + number;
		count = count + 1;
	}
	fclose (in);
	
	printf("�������� ����: %d\n", count);
	printf("�������� �հ�: %d\n", sum);
	
	average = (double)sum / count;
	printf("�������� ���: %5.2lf\n", average);
	
	return (0);
}
