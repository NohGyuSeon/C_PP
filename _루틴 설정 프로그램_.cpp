#include <stdio.h>
#include <string.h>

typedef struct {
	char string[30];
} Struct;

int main(void) {
	
	int Month, Day, Week, N, k, i;
	
	Struct std[30] {
		{"��"}, {"��"}, {"ȭ"}, {"��"}, {"��"}, {"��"}, {"��"}
	};
	
	printf("��ƾ ���� ���� �Է��ϼ��� : ");
	scanf("%d", &Month);
	printf("��ƾ ���� ���� �Է��ϼ��� : ");
	scanf("%d", &Day);
	printf("��ƾ ���� ������ �Է��ϼ��� (0 ~ 6) : ");
	scanf("%d", &Week);
	printf("��ƾ �Ⱓ�� �Է��ϼ��� : ");
	scanf("%d", &N);
	printf("\n");
	
	int LastDay;
	LastDay = Day + N;
	
	if(Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10 || Month == 12) {
		if(LastDay <= 31) {
			for(i = 0; i < N; i++) {
				k = Week + i ;
				k = k % 7;
				printf("%d�� %d�� (%s)\n", Month, Day + i, std[k]);
				printf("- \n");
				printf("- \n");
				printf("- \n");
				printf("- \n");
				printf("\n");
			}
		}
		else {
			LastDay = LastDay - 31;
			for(i = 0; i <= 31 - Day; i++) {
				k = Week + i ;
				k = k % 7;
				printf("%d�� %d�� (%s)\n", Month, Day + i, std[k]);
				printf("- \n");
				printf("- \n");
				printf("- \n");
				printf("- \n");
				printf("\n");
			}
			Month += 1;
			for(i = 1; i < LastDay; i++) {
				k = Week + i + 31 - Day;
				k = k % 7;
				printf("%d�� %d�� (%s)\n", Month, i, std[k]);
				printf("- \n");
				printf("- \n");
				printf("- \n");
				printf("- \n");
				printf("\n");
			}
		}
	}
	
	return 0;
}




