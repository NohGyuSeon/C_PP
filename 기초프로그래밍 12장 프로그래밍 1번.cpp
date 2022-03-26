#include <stdio.h>

int main(void)
{
	FILE *fptr;
	char name[20];
	int age;
	float salary;
	fptr = fopen ("employee.txt", "w"); 
	if (fptr == NULL)
	{
		printf("파일을 생성할 수 없음!\n");
		return;
	}
	 
	printf("직원 이름: ");
	scanf("%s", name);
	fprintf(fptr, "이름 = %s\n", name);
	printf("나이: ");
	scanf("%d", &age);
	fprintf(fptr, "나이 = %d\n", age);
	printf("월급: ");
	scanf("%f", &salary);
	fprintf(fptr, "월급 = %f\n", salary);
	fclose(fptr);
	
	return 0;
}
