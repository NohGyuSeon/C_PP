#include <stdio.h>
#include <string.h>

int main(void)
{
	char source[1000] = { 0 };
	char input[100] = { 0 };
	
	printf("������ �Է��Ͻÿ� : ");
	gets(input);
	strcpy(source, "\n#include <stdio.h>\n");
	strcat(source, "int main(void)\n");
	strcat(source, "{\n\t");
	strcat(source, input);
	strcat(source, "\n\treturn 0;\n");
	strcat(source, "}\n");
	printf("��ü ���α׷� : ");
	printf("%s", source);
	
	return 0;
}
