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
	strcpy (e.title, "안부 메일");
	strcpy (e.receiver, "chulsoo@hankuk.ac.kr");
	strcpy (e.sender, "hsh@hankuk.ac.kr");
	strcpy (e.content, "안녕하십니까? 별일 없으신지요?");
	strcpy (e.date, "2010/9/1");
	e.priority = 1;
	
	return 0;
}
