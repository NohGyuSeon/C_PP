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
		
		printf("�ʱ� �ݾ� $%d \n", stake);
		printf("��ǥ �ݾ� $%d \n", goal);
		printf("%d ���� %d�� �¸�\n", T, wins);
		printf("�̱� Ȯ��=%f \n", 100.0 * wins / T);
		printf("��� ���� Ƚ�� = %f \n" , 1.0 * bets / T);

}
