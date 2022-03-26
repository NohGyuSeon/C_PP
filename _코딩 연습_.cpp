#include <stdio.h>
#define PI 3.141592

int get_integer() {
	
	int num;
	printf("원의 반지름 입력 : ");
	scanf("%d", &num);
	
	return num;
}

int main(void) {
	
	int r;
	r = get_integer();
	printf("원의 둘레는 : %f\n", 2*PI*r);
	printf("원의 넓이는 : %f", PI*PI*r);
	
	return 0;	
}
