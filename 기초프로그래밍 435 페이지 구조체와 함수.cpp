struct student make_student(void)
{
	struct student s;
	
	printf("나이 : ");
	scanf("%d", &s.age);
	printf("이름 : ");
	scanf("%s", s.name);
	printf("키 : ");
	scanf("%f", &s.grade);
	
	return s;
}

