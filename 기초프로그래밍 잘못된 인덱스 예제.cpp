#include <stdio.h>
int main(void)
{
	
	int scores[5];
	int i;
	
	scores[0]=10;
	scores[1]=20;
	scores[2]=30;
	scores[3]=40;
	scores[4]=50;
	scores[5]=60;
	
	for(i=0; i<=5; i++)
		printf("scores[%d]=%d\n", i, scores[i]);
		
	return 0;
}
