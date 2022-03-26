 #include <stdio.h>
 #include <string.h>
 
 struct student {
 	int number;
 	char name[10];
 	double score;
 };
 
 void change_temp(struct student t) {
 	t.number = 1993002;
 	strcpy(t.name, "Kang2");
 	t.score = 4.3;
 	
 	printf("change_temp : %d %s %f\n", t.number, t.name, t.score); 	
 }
 
struct student get_input() {
	struct student temp;
	printf("학번을 입력하세요 : ");
	scanf("%d", &temp.number);
	printf("이름을 입력하세요 : ");
	scanf("%s", &temp.name);
	printf("학점을 입력하세요 : ");
	scanf("%lf", &temp.score);
	
	return temp; // {1234, "Lee", 2.0}
}

int main()
{
	struct student s1 = {20211234, "Kang", 3.14};
	// change_temp(temp);
	s1 = get_input(); // {1234, "Lee", 2.0}
	
	printf("main : %d %s %f\n", s1.number, s1.name, s1.score);
	
	return 0;
}





