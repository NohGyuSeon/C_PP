#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

struct student {
	int number;
	char name[10];
	double grade;
}; 

int main(void)
{
	struct student s;
	
	s.number = 20182337;
	strcpy(s.name, "노규선"); 
	s.grade = 4.5;
	
	printf("학번 = %d\n", s.number);
	printf("이름 = %s\n", s.name);
	printf("학점 = %f\n", s.grade);
	
	return 0;
}

