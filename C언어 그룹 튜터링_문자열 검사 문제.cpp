#include <stdio.h>
#include <string.h>

int func(const char s1[], const char s2[])
{
	
	int len1, len2;
	
	len1 = strlen(s1);
	len2 = strlen(s2);
	
	int i;
	int value = 0;
	
	for(i=0; i<len1; i++) {
		if(s1[i] == s2[i])
			value++;
		else
			value = 0;
	}
	
	if(value == len1)
		printf("���ڿ��� ���Ե˴ϴ�.");
	else
		printf("���ڿ��� ���Ե��� �ʽ��ϴ�");
}

//	while (str1[i] != '\0' && strlen(str1) >= strlen(str2) + i
//	int j = 0;
//	while (str2[j] != '\0' && str2[i+j] == str2[j]
//	j++;
	
int main(void)
{
	char str1[256] = {0};
	char str2[256] = {0};
	
	printf("Ȯ���� ���ڿ��� �Է��ϼ���\n");
	gets(str1);
	printf("������ �� ���ڿ��� �Է��ϼ���\n");
	gets(str2);
	
	int len1, len2;
	
	len1 = strlen(str1);
	len2 = strlen(str2);
	
	while(1) {
		if(len2 >= len1)
			break;
		else
			printf("�ٽ� �Է��� �ּ��� (���ڿ��� ���Ե��� �ʽ��ϴ�)\n");
			gets(str1);
			gets(str2);
	}	
	
	func(str1, str2);
	
	return 0;
}
