#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char s[100] = { 0 };
	int freq[256] = { 0 };
	int i;
	
	printf("�ؽ�Ʈ�� �Է��Ͻÿ� : ");
	gets(s);
	for(i=0; i<strlen(s); i++) {
		freq[s[i]]++;
	}
	for(i='a'; i<='z'; i++) {
		if (freq[i] != 0) {
			printf("%c���ڰ� %d�� �����Ͽ���!\n", i ,freq[i]);		
		}
	}
	
	return 0;
}
