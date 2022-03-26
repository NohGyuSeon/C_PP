#include <stdio.h>

int main(void)
{
	int a[] = { 10, 20, 30, 40, 50 };
	
	printf("배열의 시작 주소 = %u, %u, %u\n", a, &a, &a[0]);
	printf("배열의 다음 주소 = %u, %u, %u\n", a+1, &a+1, &a[0]+1);
	
	return 0; 
}
