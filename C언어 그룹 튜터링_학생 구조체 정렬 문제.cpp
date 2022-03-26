#include <stdio.h>
#include <string.h>

typedef struct {
	char name[256];
	int age;
} Student;

int main(void)
{
	int n;
	Student s[100];
	printf("입력할 배열 요소의 개수를 입력하세요.\n");
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		scanf("%s %d", s[i].name, &s[i].age);	
	}
	
	int i, j;
	
	for (i=0; i<n; i++) {
		for (j=0; j<n-1-i; j++) {
			if (strcmp(s[j].name, s[j+1].name) > 0) {
				Student tmp = s[j];
				s[j] = s[j+1];
				s[j+1] = tmp;
			}
		}
	}

	
	return 0;
}
