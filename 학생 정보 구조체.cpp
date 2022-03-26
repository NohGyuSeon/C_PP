#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {     // 구조체 정의  
	int number;
	char name[10];
	double grade;
};

int main(void)
{
	struct student s;     // 구조체 변수 정의 
	
	s.number = 20150001;     // 구조체 멤버 참조 
	strcpy(s.name, "홍길동");
	s.grade = 4.5; 
	
	printf("학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("학점 : %.1f\n", s.grade);
	
	return 0;
} 
