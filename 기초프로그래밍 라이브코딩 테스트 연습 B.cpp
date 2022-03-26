#include <stdio.h>

int main(void)
{
	int x, y;
	scanf("%d %d", &x, &y);
	
	printf("%.2f", (float)x/y * 100);
	
	return 0;
 } 
