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
	printf("구조체의 개수: ");
	scanf("%d", &noOfRecords);
	
	ptr = (struct course*) malloc(noOfRecords * sizeof(struct course));
	
	for(i=0; i<noOfRecords; i++)
	{
		printf("과목 이름과 성적을 입력하시오: ");
		scanf("%s %lf", &(ptr[i].subject), &(ptr[i].marks));
	}
	
	printf("저장된 정보 출력: \n");
	
	for(i=0; i<noOfRecords; ++i)
		printf("%s\t%lf\n", (ptr + i)->subject, (ptr + i)->marks);
		
	return 0;
}


