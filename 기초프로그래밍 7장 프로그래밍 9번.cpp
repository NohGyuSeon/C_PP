#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
int main(void)
{
	int n[SIZE];
	int i, j;
	int pos = 4;
	srand(time(NULL));
	
	for (i = 0; i <100; ++i)
	{
		for (i = 0; i < 10; ++i)
			n[i] = ' _';
		int value = rand() % 2;
		if (value == 1)
			pos++;
		else
			pos--;
		if (pos < 0) pos = 0;
		if (pos >= 10) pos = 9;
		n[pos] = '*';
		for (i = 0; i < 10; ++i)
			printf("%c ", n[i]);
		printf("\n");
		getch();
	}
	return 0;
}
