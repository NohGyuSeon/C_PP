#include <stdio.h>
#include <stdlib.h>

struct course
{
	char name[30];
	int number;
	int score1;
	int score2;
	int score3;
};

int main(void)
{
	int max = 0, sum = 0;
	int max_index = 0;
	struct course *ptr;
	int i, noOfRecords;
	scanf("%d", &noOfRecords);
	
	ptr = (struct course*) malloc(noOfRecords * sizeof(struct course));
	
	for(i=0; i<noOfRecords; i++)
	{
		scanf("%s %d %d %d %d", &(ptr[i].name), &(ptr[i].number), &(ptr[i].score1), &(ptr[i].score2), &(ptr[i].score3));		     
	}

	for(i=0; i<noOfRecords; ++i)
	{
		sum = 0;
		sum += ptr[i].score1 + ptr[i].score2 + ptr[i].score3;
		if(max < sum)
		{
			max = sum;
			max_index = i;
		}
	}
	
	printf("%s", (ptr + max_index)->name);
	
	return 0;
}

