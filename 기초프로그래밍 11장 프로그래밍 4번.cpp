#include <stdio.h>
#include <string.h>

struct student {
	union {
		char number[30];
		char reg_number[30];
	} id;
	char name[20];   // �̸�
	char tel[20];   // ��ȭ��ȣ
};

int main(void)
{
	struct student s[10] = {
		{ "20170001", "ȫ�浿1", "111-1111" },
		{ "990301-123456", "ȫ�浿2", "111-222" } };
	int i;
	for (i=0; i<10; i++)
		printf("%s\n", s[i].name);
		
	return 0;
}
