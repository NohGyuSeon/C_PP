#include <stdio.h>
#include <string.h>

int main(void)
{
	char source[1000] = { 0 };
	char input[100] = { 0 };
	
	printf("문장을 입력하시오 : ");
	gets(input);
	strcpy(source, "\n#include <stdio.h>\n");
	strcat(source, "int main(void)\n");
	strcat(source, "{\n\t");
	strcat(source, input);
	strcat(source, "\n\treturn 0;\n");
	strcat(source, "}\n");
	printf("전체 프로그램 : ");
	printf("%s", source);
	
	return 0;
}
