#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {     // ����ü ����  
	int number;
	char name[10];
	double grade;
};

int main(void)
{
	struct student s;     // ����ü ���� ���� 
	
	s.number = 20150001;     // ����ü ��� ���� 
	strcpy(s.name, "ȫ�浿");
	s.grade = 4.5; 
	
	printf("�й� : %d\n", s.number);
	printf("�̸� : %s\n", s.name);
	printf("���� : %.1f\n", s.grade);
	
	return 0;
} 
