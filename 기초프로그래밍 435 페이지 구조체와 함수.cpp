struct student make_student(void)
{
	struct student s;
	
	printf("���� : ");
	scanf("%d", &s.age);
	printf("�̸� : ");
	scanf("%s", s.name);
	printf("Ű : ");
	scanf("%f", &s.grade);
	
	return s;
}

