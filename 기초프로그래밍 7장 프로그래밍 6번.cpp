#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void)
{
	int freq[6] = {0};
	int i, face;
	srand(time(NULL));

	for(i=0; i< 60000; i++)
	{
		face = rand() % 6;
		++freq[face];
	}

	printf("주사위면\t\t빈도\n");
	for(i=0; i < 6; i++)
		printf("   %d\t\t\t%d\n",i+1,freq[i]);

 	return 0;
}
