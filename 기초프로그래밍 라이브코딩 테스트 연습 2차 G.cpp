#include <stdio.h>

struct student {
	char name[10];
	int score;
};

int main(void)
{
	struct student students[100];
	int n, m, max, max_index;
	
	scanf("%d %d", &n, &m);
	
	for(int i=0; i<n; i++)
	{
		scanf("%s %d", students[i].name, &students[i].score);		
	}
	
	for(int i=0; i<m; i++)
	{
		max = students[0].score;
		max_index = 0;
		for(int j=0; j<n; j++)
		{
			if(max < students[j].score)
			{
				max = students[j].score;
				max_index = j;
			}
		}
		
		printf("%s\n", students[max_index].name);
		students[max_index].score = 0;
	}

	return 0;
}


