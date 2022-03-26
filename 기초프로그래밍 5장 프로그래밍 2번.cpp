#include <stdio.h>

int main(void)
{
	char colour;
	
	printf ("신호등의 색깔 입략 (R, G, Y) : ");
	scanf("%c", &colour);
	
	if (colour == 'r' || colour == 'R')
		printf("정지!\n");
	
	else if (colour == 'g' || colour == 'G')
		printf("주의!\n");
		
	else if (colour == 'y' || colour == 'Y')
		printf("진행!\n");
	
	else
		printf("INVALID COLOUR!\n");	
		
	return 0;
}
