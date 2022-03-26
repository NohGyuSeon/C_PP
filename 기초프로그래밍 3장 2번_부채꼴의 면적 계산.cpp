#include <stdio.h>
#define PI 3.14
#define MAX_RADIUS 1000
#define MIN_RADIUS 0
#define MAX_ANGLE 360
#define MIN_ANGLE 0

int main(void)
{
	double radius;
	double angle;
	double area;
	
	scanf("%lf", &radius);
	scanf("%lf", &angle);
	
	area = PI * radius * radius * angle / 360;
	printf("%.2f \n", area);
	
	return 0;
}
