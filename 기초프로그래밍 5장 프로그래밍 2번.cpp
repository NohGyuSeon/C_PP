#include <stdio.h>

int main(void)
{
	char colour;
	
	printf ("��ȣ���� ���� �Է� (R, G, Y) : ");
	scanf("%c", &colour);
	
	if (colour == 'r' || colour == 'R')
		printf("����!\n");
	
	else if (colour == 'g' || colour == 'G')
		printf("����!\n");
		
	else if (colour == 'y' || colour == 'Y')
		printf("����!\n");
	
	else
		printf("INVALID COLOUR!\n");	
		
	return 0;
}
