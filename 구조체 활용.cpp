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
	
	printf("�й��� �Է��ϼ��� : ");
	scanf("%d", &s.number);
	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", s.name);    //  name -> �迭
	printf("������ �Է��ϼ��� : ");
	scanf("%lf\n", &s.grade);   // "%f\n"
	 
	printf("�й� : %d\n", s.number);
	printf("�̸� : %s\n", s.name);
	printf("���� : %.1f\n", s.grade);
	return 0;
} 
