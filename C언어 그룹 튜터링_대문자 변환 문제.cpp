#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {

	char text[30];
	int i;
	gets(text);
	
	for(i=0; i<strlen(text); i++) {
		if (text[i] >= 'a' && text[i] <= 'z') {
			text[i] = toupper(text[i]);
		}
	}
	
	for(i=0; i<strlen(text); i++) {
		printf("%c", text[i]);
	}
	
	return 0;
}
