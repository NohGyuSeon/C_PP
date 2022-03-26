#include <stdio.h>

struct TIME {
	int hours;
	int minutes;
	int seconds;
}; 

void get_difference(struct TIME t1, struct TIME t2, struct TIME *differ);

int main(void)
{
	struct TIME t1, t2, differ;
	
	scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);
	scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);
	
	get_difference(t1, t2, &differ);
	printf("%d %d %d", differ.hours, differ.minutes, differ.seconds);
	
	return 0;
}

void get_difference(struct TIME t1, struct TIME t2, struct TIME *differ) {
	if(t1.hours > t2.hours) {
		if(t1.minutes < t2.minutes) {
			--t1.hours;
			t1.minutes += 60;	
		}
		if(t1.seconds < t2.seconds) {
			--t1.minutes;
			t1.seconds += 60;
		} 	
			differ->hours = t1.hours - t2.hours;
			differ->minutes = t1.minutes - t2.minutes;
			differ->seconds = t1.seconds - t2.seconds;
	}	
	
	if(t1.hours < t2.hours) {
		if(t1.minutes > t2.minutes) {
			--t2.hours;
			t2.minutes += 60;
		} 
		if(t1.seconds > t2.seconds) {
			--t2.minutes;
			t2.seconds += 60;
		} 
			differ->hours = t2.hours - t1.hours;	
			differ->minutes = t2.minutes - t1.minutes;
			differ->seconds = t2.seconds - t1.seconds;
	}
	
	if(t1.hours == t2.hours) {
		if(t1.minutes > t2.minutes) {
			if(t1.seconds < t2.seconds) {
				--t1.minutes;
				t1.seconds += 60;
			}	
				differ->hours = t1.hours - t2.hours;	
				differ->minutes = t1.minutes - t2.minutes;
				differ->seconds = t1.seconds - t2.seconds;
		}
		else if(t1.minutes < t2.minutes) {
			if(t2.seconds < t1.seconds) {
				--t2.minutes;
				t2.seconds += 60;
			}	
				differ->hours = t2.hours - t1.hours;	
				differ->minutes = t2.minutes - t1.minutes;
				differ->seconds = t2.seconds - t1.seconds;					
		}  
	}
}











	  
