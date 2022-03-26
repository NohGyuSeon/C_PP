#include <stdio.h>
int main(void)
{
	int mid_score, final_score;
	double w_average;

	printf("중간 고사 점수를 입력하시오 :");
	scanf("%d",&mid_score);

	printf("기말 고사 점수를 입력하시오 :");
	scanf("%d",&final_score);
	w_average = (mid_score + final_score)/2.0;

	if(w_average >= 90)
		printf("당신의 학점은 A학점입니다.\n");
	else if(w_average >= 80)
		printf("당신의 학점은 B학점입니다.\n");
	else if(w_average >= 70)
		printf("당신의 학점은 C학점입니다.\n");
	else if(w_average >= 60)
		printf("당신의 학점은 D학점입니다.\n");
	else 
		printf("당신의 학점은 F학점입니다.\n");
		
	return 0;
}
