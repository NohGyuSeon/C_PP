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
	strcpy(s.name, "��Լ�"); 
	s.grade = 4.5;
	
	printf("�й� = %d\n", s.number);
	printf("�̸� = %s\n", s.name);
	printf("���� = %f\n", s.grade);
	
	return 0;
}

