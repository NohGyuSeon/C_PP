#include <stdio.h>
#include <string.h>

typedef struct {
	char string[30];
} Struct;

int main(void) {
	
	int Month, Day, Week, N, k, i;
	
	Struct std[30] {
		{"일"}, {"월"}, {"화"}, {"수"}, {"목"}, {"금"}, {"토"}
	};
	
	printf("루틴 시작 월을 입력하세요 : ");
	scanf("%d", &Month);
	printf("루틴 시작 일을 입력하세요 : ");
	scanf("%d", &Day);
	printf("루틴 시작 요일을 입력하세요 (0 ~ 6) : ");
	scanf("%d", &Week);
	printf("루틴 기간을 입력하세요 : ");
	scanf("%d", &N);
	printf("\n");
	
	int LastDay;
	LastDay = Day + N;
	
	if(Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10 || Month == 12) {
		if(LastDay <= 31) {
			for(i = 0; i < N; i++) {
				k = Week + i ;
				k = k % 7;
				printf("%d월 %d일 (%s)\n", Month, Day + i, std[k]);
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
				printf("%d월 %d일 (%s)\n", Month, Day + i, std[k]);
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
				printf("%d월 %d일 (%s)\n", Month, i, std[k]);
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




