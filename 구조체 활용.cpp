#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student { 
	int number;
	char name[10];
	double grade;   // float
};

int main(void)
{
	struct student s;
	
	printf("학번을 입력하세요 : ");
	scanf("%d", &s.number);
	printf("이름을 입력하세요 : ");
	scanf("%s", s.name);    //  name -> 배열
	printf("학점을 입력하세요 : ");
	scanf("%lf\n", &s.grade);   // "%f\n"
	 
	printf("학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("학점 : %.1f\n", s.grade);
	return 0;
} 
