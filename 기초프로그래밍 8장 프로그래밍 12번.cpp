#include <stdio.h>

void show_digit(int x);

int main(void)
{
	show_digit(1234);
}

void show_digit(int x)
{
	if (x > 0)
	{
		show_digit(x / 10);
		printf("%d ", x % 10);
	}
}
