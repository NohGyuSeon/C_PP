#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
 
#define SOL "apple"

int main(void)
 {
 	char s[100] = SOL;
 	char ans[100];
 	int i, len;
 	
 	srand(time(NULL));
 	len = strlen(s);
	
 	for(i=0; i<len; i++) {
 		int pos1 = rand() % len;
 		int pos2 = rand() % len;
 		char tmp = s[pos1];
 		s[pos1] = s[pos2];
 		s[pos2] = tmp;
	 }
	 
	 do {
	 	printf("%s�� �����ܾ ���纸���� : ", s);
	 	scanf("%s", ans);
	 } while (strcmp(ans, SOL) != 0);
	 
	 printf("�����մϴ�. \n");
	 
	 return 0;
 }

	 
