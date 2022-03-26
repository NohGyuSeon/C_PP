#include <stdio.h>

int main(void) {

	int a, b, i ,j;

	scanf("%d %d", &a, &b);

	if(a>=0 && b>=0 && a+b<= 10) {
		for(i=0; i<a; i++) {
			for(j=0; j<a-i; j++) {
				printf(" ");
			}
			for(j=0; j<i+1; j++) {
				printf("%d", b+j);
			}
			printf("\n");
		}
 
	}
	else {
		printf("Error!");
	}
	return 0;
}
