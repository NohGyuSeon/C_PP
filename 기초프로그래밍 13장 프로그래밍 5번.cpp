#include <stdio.h>
#include <stdlib.h>

struct course
{
	char subject[30];
	double marks;
};

int main(void)
{
	struct course *ptr;
	int i, noOfRecords;
	printf("����ü�� ����: ");
	scanf("%d", &noOfRecords);
	
	ptr = (struct course*) malloc(noOfRecords * sizeof(struct course));
	
	for(i=0; i<noOfRecords; i++)
	{
		printf("���� �̸��� ������ �Է��Ͻÿ�: ");
		scanf("%s %lf", &(ptr[i].subject), &(ptr[i].marks));
	}
	
	printf("����� ���� ���: \n");
	
	for(i=0; i<noOfRecords; ++i)
		printf("%s\t%lf\n", (ptr + i)->subject, (ptr + i)->marks);
		
	return 0;
}


