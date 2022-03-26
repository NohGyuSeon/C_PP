#include <stdio.h>
#include <string.h>

struct student {
	union {
		char number[30];
		char reg_number[30];
	} id;
	char name[20];   // 이름
	char tel[20];   // 전화번호
};

int main(void)
{
	struct student s[10] = {
		{ "20170001", "홍길동1", "111-1111" },
		{ "990301-123456", "홍길동2", "111-222" } };
	int i;
	for (i=0; i<10; i++)
		printf("%s\n", s[i].name);
		
	return 0;
}
