#include <stdio.h>

int main(void)
{
	int A[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	
	int a, b, c, d;
	
	a = A[2] + A[3] + A[4];
	b = A[5] + A[6] + A[7];
	c = A[8] + A[9] + A[10];
	d = A[11] + A[0] + A[1];
		
	printf("봄은 %d일입니다.\n", a);
	printf("여름은 %d일입니다.\n", b);
	printf("가을은 %d일입니다.\n", c);
	printf("겨울은 %d일입니다.\n", d);
	
	return 0;
}
