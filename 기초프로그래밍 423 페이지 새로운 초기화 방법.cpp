#include <stdio.h>

// 2차원 공간의 점을 구조체로 나타낸다.

struct point {
	int x;
	int y;
}; 

int main(void)
{
	struct point p = { 1, 2 };
	struct point q = { .y = 2, .x = 1 };
	struct point r = p;
	r = (struct point) { 1, 2 };

 	printf("p=(%d, %d)\n", p.x, p.y);
 	printf("q=(%d, %d)\n", q.x, q.y);
 	printf("r=(%d, %d)\n", r.x, r.y);
 	
	return 0;
}
