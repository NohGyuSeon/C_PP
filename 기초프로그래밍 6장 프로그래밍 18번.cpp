#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int stake = 50;
	int goal = 250;
	int T = 1000;
	int t;

		int bets = 0;  
		int wins = 0;  

		for (t = 0; t < T; t++) {

			int cash = stake;
			while (cash > 0 && cash < goal) {
				bets++;
				if ((double)rand()/RAND_MAX < 0.5) cash++;  
				else                     cash--;   
			}
			if (cash == goal) wins++;   
		}
		
		printf("초기 금액 $%d \n", stake);
		printf("목표 금액 $%d \n", goal);
		printf("%d 중의 %d번 승리\n", T, wins);
		printf("이긴 확률=%f \n", 100.0 * wins / T);
		printf("평균 배팅 횟수 = %f \n" , 1.0 * bets / T);

}
