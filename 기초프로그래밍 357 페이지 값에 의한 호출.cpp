#include <stdio.h>

// Áß¿ä
 
void modify(int value)
{
	value = 99;
 } 
 
 int main(void)
 {
 	int number = 1;
 	
 	modify(number);
 	printf("number = %d\n", number);
 	
 	return 0;
 }
