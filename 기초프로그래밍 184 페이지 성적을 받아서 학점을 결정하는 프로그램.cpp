#include <stdio.h>

int main(void)
{
	int score;
	char grade;
	
	printf("성적을 입력하시오: ");
	scanf("%d", &score);
	
	if (score >= 90)
		grade = 'A';
	else if (score >= 80)
		grade = 'B';
	else if (score >= 70)
		grade = 'C';
	else if (score >= 60)
		grade = 'D';
	else
		grade = 'F';         
		
	printf("학점 %c \n", grade);
	
	// if와 else if의 차이 -> if는 하나의 독립적인 조건문이므로 100을 입력했을때,
	//                        계속 값을 입력받아서 'D'가 출력됨
	// else if -> if에서 조건 만족 시 값을 입력받지 않고 넘어감
                                                     

	
	return 0;
}
