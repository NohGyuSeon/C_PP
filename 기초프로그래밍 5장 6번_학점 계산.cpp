#include <stdio.h>

int main(void) 
{
	int x, y;
	int avg;
	
	scanf("%d %d", &x, &y) ;
	
	avg = (x+y) / 2;
	
	if(avg >= 90) {
		printf("A");
	}
	else if(avg >= 80) {
		printf("B");
	}
	else if(avg >= 70) {
		printf("C");
	}
	else if(avg >= 60) {
		printf("D");
	}
	else {
		printf("F");
	}
	
	return 0;
}
