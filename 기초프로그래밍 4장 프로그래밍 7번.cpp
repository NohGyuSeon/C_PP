#include <stdio.h>
#include <math.h>

int main(void)
{
	int x1, y1;
	int x2, y2;
	
	printf("첫번째 점 (x1, y1) : ");
	scanf("%d %d", &x1, &y1);
	printf("두번째 점 (x2, y2) : ");
	scanf("%d %d", &x2, &y2);
	double dist;
	dist = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	printf("Distance = %lf\n", dist);
	
	return 0;
 } 
