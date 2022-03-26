#include<stdio.h>

int main(){

     int x, y, Q, A;
    
    scanf("%d", &x);
    scanf("%d", &y);
    printf("%d ", x + y);
    
    if ( x > y ) {
    	Q = 1;
	}
	else {
		Q = 0;
	}
	
	A = Q ? x-y : y-x;
	
	printf("%d", A);
	
	return 0;
}
