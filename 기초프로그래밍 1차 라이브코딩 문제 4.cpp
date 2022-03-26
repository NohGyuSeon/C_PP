#include <stdio.h>

int main(void) {

	int month, use;

	scanf("%d", &month);

	if(month <= 200) {
		use =  910 + month * 93.3;
	}
	else if(month <= 400) {
		use = 1600 + 200 * 93.3 + (month - 200) * 187.9;
		}
	else {
		use = 7300 + 200 * 93.3 + 200 * 187.9 + (month - 400) * 280.6;
		}

	printf("%d", use);

	return 0;
}

