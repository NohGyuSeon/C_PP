#include <stdio.h>
#include <string.h>

int main(void)
{
	char input[11] = "��Լ�";
	char result[5] = "NGS";
	strcpy(result, input);
	printf("���ڿ� ���� : %s\n", result);
	return 0;
}
