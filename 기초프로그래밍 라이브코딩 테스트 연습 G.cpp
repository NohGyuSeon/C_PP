#include <stdio.h>
#define N 100
int A[N][N];

int main(void) {
	
	int n, count = 1, sum = 0;
	int i, j;
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		for (j=0; j<n; j++) {
			A[i][j] = count++;
		}
	}
	
	for (i=0; i<n; i++) {
		for (j=0; j<n; j++) {
			if(i == j) {
				sum += A[i][j];
			}
		}
	}
	printf("%d", sum);
	
	return 0;
}
