#include <stdio.h>
int main(void)
{
	int score[3][3] = { { 30, 10, 11},
						{ 40, 90, 32},
						{ 70, 65, 56} };
	int i, k, avg, sum;
	sum = 0;
	for(i=0; i<3; i++){
		for(k=0; k<3; k++){
			sum += score[i][k];
		}
	}
	printf("Æò±ÕÁ¡¼ö=%f\n", sum/9.0);
	
	return 0;
}
