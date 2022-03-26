#include <stdio.h>
#define ROWS 3
#define COLS 3 
 
int main(void)
{	
	int r, c, sumA, sumB;	
	double avgA, avgB;
	
	int A[ROWS][COLS] = { {1, 2, 3},
					  	  {4, 5, 6},
						  {7, 8, 9}
   						};
	int B[ROWS][COLS] = { {3, 5, 7},
						  {1, 5, 9},
						  {9, 6, 3}
						};
	
	for(r=0; r<ROWS; r++) {
		for (c=0; c<COLS; c++) {
			sumA += A[r][c];
			sumB += B[r][c];
			avgA = sumA / 9.0;
			avgB = sumB / 9.0;
		}
	} 
	
	printf("��� A ������ ��: %d \n", sumA);
	printf("��� A ������ ���: %f \n", avgA);
	printf("��� B ������ ��: %d \n", sumB);
	printf("��� B ������ ���: %f \n", avgB);
	 
	return 0;
}
