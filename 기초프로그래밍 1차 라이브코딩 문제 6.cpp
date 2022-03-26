#include <stdio.h>

int main(void) {
 
	int a, b;
	
	while(1){
		scanf("%d %d", &a, &b);
		if(a>=1 && b>=1 && a<=9 && b<=9){
			break;
		}
	}
	
	for(int i=1; i<=100; i++) {
		if(i%a == 0 && i%b ==0) {
			printf("%d ", i);
		}
	}
			
	return 0;
}

