// hello.c
#include <stdio.h>

void hello(char *name)
{
	printf("�ȳ� %s \n", name);
}

// hello.h
#progma once
void hello(char *name);

// main.c
#include <stdio.h>

int main(void)
{
	hello("ö��");
	return 0;
}

