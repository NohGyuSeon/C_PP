#include <stdio.h>

int main(void) {
	
	int i, j;
	int k[i];
	
	scanf("%d", &i);
	
	for(j=0; j<i; j++) {
		scanf("%d", &k[j]);
	}
	
	int sum = 0;
	double avg = 0;
	
	for(j=0; j<i; j++) {
		sum += k[j];
	}
	
	avg = (double)sum / i;
	
	printf("%.1f\n", avg);
	
	int count = 0;
	
	for(j=0; j<i; j++) {
		if(k[j] > avg) { 
			printf("%d ", k[j]);
			count++;
		}
	}
	printf("\n");
	printf("%d", count);
	return 0;
} 
