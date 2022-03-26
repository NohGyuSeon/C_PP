#include <stdio.h>

int global_x = 999;

int main()
{
	{
		int global_x = 9;
		printf("global_x = %d\n", global_x);
		{
			int global_x = 666;
			printf("global_X = %d\n", global_x);
		}
		printf("global_x = %d\n", global_x);
	}
	printf("global_x = %d\n", global_x);
	return 0;
}
