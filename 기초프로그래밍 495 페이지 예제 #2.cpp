#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *pi;
	
	pi = (int *)malloc(5 * sizeof(int));
	if(pi == NULL) {
		printf("�޸� �Ҵ� ���� \n");
		exit(1);
	}
	*pi = 1;
	*(pi + 1) = 2; // pi[0] = 1;
	*(pi + 2) = 3; // pi[1] = 2;
	*(pi + 3) = 4; // pi[2] = 3;
	*(pi + 4) = 5; // pi[3] = 4; 
	
	free(pi);
	
	return 0;
}
