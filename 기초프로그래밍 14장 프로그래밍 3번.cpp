// hello.c
#include <stdio.h>

void hello(char *name)
{
	printf("¾È³ç %s \n", name);
}

// hello.h
#progma once
void hello(char *name);

// main.c
#include <stdio.h>

int main(void)
{
	hello("Ã¶¼ö");
	return 0;
}

