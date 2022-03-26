#include <stdio.h>

int main(void) {

	int n;
	scanf("%d", &n);
	
	int h,m,s;
	
	h = n / 3600;
	m = n / 60 % 60;
	s = n % 60;
	
	printf("%d %d %d", h, m, s);

	return 0;
}
