#include <stdio.h>
#include <Stdlib.h>

int main(void)
{
	char* pc;
	
	pc = (char *)malloc(1*sizeof(char));
	if(pc == NULL) {
		printf("�޸� �Ҵ� ����\n");
		exit(1);
	}
	
	*pc = 'a';
	printf("%c", *pc);
	free(pc);
	
	return 0;
}
