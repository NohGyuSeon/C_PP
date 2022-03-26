#include <stdio.h>
#include <string.h>

int main(void)
{
	char input[11] = "노규선";
	char result[5] = "NGS";
	strcpy(result, input);
	printf("문자열 복사 : %s\n", result);
	return 0;
}
