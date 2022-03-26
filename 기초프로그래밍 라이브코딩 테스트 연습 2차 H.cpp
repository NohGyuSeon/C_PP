#include <stdio.h>
#include <string.h>

typedef struct {
	char name[64];
	int height; 
	float weight;
	long schols;
} Student;

void swap_student(Student *x, Student *y)
{
	Student tmp = *x;
	*x = *y;
	*y = tmp;
}

void sort_height(Student a[], int n) {
	int i,j;
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(a[j].height < a[j+1].height)
				{
					swap_student(a+j, a+j+1);
				}
		}
	}
}

void sort_schols(Student a[], int n) {
	int i,j;
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(a[j].schols < a[j+1].schols)
				{
					swap_student(a+j, a+j+1);
				}
		}
	}
}

void sort_name(Student a[], int n) {
	int i,j;
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(strcmp(a[j].name,a[j+1].name))
				{
					swap_student(a+j, a+j+1);
				}
		}
	}
}

int main(void)
{
	int i;
	int number, sort_type;
	scanf("%d %d", &number, &sort_type);
	Student std[number];
	
	for(i=0; i<number; i++)
	{
		 scanf("%s %d %f %ld", std[i].name, &std[i].height, &std[i].weight, &std[i].schols);
	}
	
	switch(sort_type)
	{
		case 0 : sort_name(std, number); break;
		case 1 : sort_height(std, number); break;
		case 2 : sort_schols(std, number); break;
	}
	
	for(i=0; i<number; i++)
	{
		printf("%-10s%6d%6.1f%7ld\n", std[i].name, std[i].height, std[i].weight, std[i].schols);
	}	
	
	return 0;
}
