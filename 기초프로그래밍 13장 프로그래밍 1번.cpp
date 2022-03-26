#include <stdio.h>
#include <stdlib.h>

typedef struct rec
{
	int i;
	float PI;
	char A;
} my_record;

int main(void)
{
	my_record *p = (my_record *)malloc(sizeof(my_record));
	
	if(p == NULL) {
		printf("메모리 할당 오류\n");
		exit(1);
	}	
	p->i = 10;
	p->PI = 3.14;
	p->A = 'a';
	
	printf("%d \n", p->i);
	printf("%f \n", p->PI);
	printf("%c \n", p->A);
	free(p);

	return 0;	
}
