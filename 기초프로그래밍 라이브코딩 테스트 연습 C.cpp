#include <stdio.h>

int main(void)
{
	int x, y;
	char c;
	
	scanf("%d%c%d", &x, &c, &y);
	switch(c) {
		case '+':
		printf("%d", x+y);
		break;
		
		case '-':
		printf("%d", x-y);
		break;

		case '*':
		printf("%d", x*y);
		break;
		
		case '/':
		printf("%.2f", (double)x/y);
		break;
	}
	
	return 0;
}
