#include <stdio.h>

int main(void) {

	double g = 9.8;
	double s, t;

	scanf("%lf", &t);

	s = 0.5 * g * (t*t);

	printf("%.2f", s);

	return 0;
	
}

