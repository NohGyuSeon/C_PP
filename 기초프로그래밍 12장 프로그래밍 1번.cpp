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
		printf("������ ������ �� ����!\n");
		return;
	}
	 
	printf("���� �̸�: ");
	scanf("%s", name);
	fprintf(fptr, "�̸� = %s\n", name);
	printf("����: ");
	scanf("%d", &age);
	fprintf(fptr, "���� = %d\n", age);
	printf("����: ");
	scanf("%f", &salary);
	fprintf(fptr, "���� = %f\n", salary);
	fclose(fptr);
	
	return 0;
}
