#include <stdio.h>
#define ROWS 3
#define COLS 3

int main(void)
{
	int A[ROWS][COLS] = { { 30, 10 ,11},
						  {40, 90, 32}, 	
						  {70, 65, 56}	
						};
	double a, b, c;
	
	for(int i=0; i<ROWS; i++) {
		a += A[0][i];
		b += A[1][i];
		c += A[2][i];
	}
	
	printf("1�� �л� ���= %.1f \n", a / 3.0);
	printf("2�� �л� ���= %.1f \n", b / 3.0);
	printf("3�� �л� ���= %.1f \n", c / 3.0);
	
	a=0, b=0, c=0;
	
	for(int i=0; i<COLS; i++) {
		a += A[i][0];
		b += A[i][1];
		c += A[i][2];
	}
	
	printf("���� #1 ���= %.1f \n", a / 3.0);
	printf("���� #2 ���= %.1f \n", b / 3.0);
	printf("���� #3 ���= %.1f \n", c / 3.0);
	
	return 0; 
}
