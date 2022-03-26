#include <stdio.h>
struct TIME{
	int seconds;
	int minutes;
	int hours;
};

void get_difference(struct TIME t1, struct TIME t2, struct TIME *diff);

int main(void) {
	struct TIME t1, t2, diff;
	printf("시작시간(시, 분, 초) : ");
	scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);
	printf("종료시간 (시, 분, 초) : ");
	scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);
	
	get_difference(t1, t2, &diff);
	printf("소요시간 %d: %d: %d: \n", diff.hours, diff.minutes, diff.seconds);
	
	return 0; 	 
}

void get_difference(struct TIME t1, struct TIME t2, struct TIME *differ) {
	if(t1.seconds > t2.seconds) {
		--t2.minutes;
		t2.seconds += 60;
	}
	differ->seconds = t2.seconds - t1.seconds;
	if(t1.minutes > t2.minutes) {
		--t2.hours;
		t2.minutes +=60;
	}
	differ->minutes = t2.minutes - t1.minutes;
	differ->hours = t2.hours - t1.hours;
}
