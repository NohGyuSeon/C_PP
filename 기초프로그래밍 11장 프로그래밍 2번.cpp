#include <stdio.h>
#include <string.h>

struct email {
	char title[100];
	char receiver[50];
	char sender[50];
	char content[1000];
	char date[100];
	int priority;
};

int main(void)
{
	struct email e;
	strcpy (e.title, "�Ⱥ� ����");
	strcpy (e.receiver, "chulsoo@hankuk.ac.kr");
	strcpy (e.sender, "hsh@hankuk.ac.kr");
	strcpy (e.content, "�ȳ��Ͻʴϱ�? ���� ����������?");
	strcpy (e.date, "2010/9/1");
	e.priority = 1;
	
	return 0;
}
