#include <stdio.h>
#include <string.h>

int main(void)
{
	char password[100];
	int i;
	int is_upper, is_lower, is_digit, is_len;
	
	while(1) {
		printf("암호를 생성하시오: ");
		scanf("%s", password);
		
		is_upper = is_lower = is_digit = is_len = 0;
		for(i=0; i<strlen(password); i++) {
			if(password[i] >= '0' && password[i] <= '9') {
				is_digit = 1;
			}
			else if(password[i] >= 'A' && password[i] <= 'Z') {
				is_upper = 1;
			}
			else if(password[i] >= 'a' && password[i] <= 'z') {
				is_lower = 1;
			}
		}
		
		if(strlen(password) >= 5 && strlen(password) <= 10) {
			is_len = 1;
		}
		
		if ( (is_upper == 1) && (is_lower == 1) && (is_digit) == 1 && (is_len == 1)) {
			printf("적정한 암호입니다.");
			break;
		}
	}
	
	return 0;
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	char s[100];
	int A, B, C;
	int i;
	
	while(1)
	{
		printf("암호를 생성하시오: ");
		gets(s);
		int lenth = strlen(s);
		
		A = B = C = 0;
			
		for(i=0; i<lenth; i++)
		{
			if(s[i] >= '0' && s[i] <= '9')
				A = 1;
			else if(s[i] >= 'a' && s[i] <= 'z')
				B = 1;
			else if(s[i] >= 'A' && s[i] <= 'Z')
				C = 1;			
		}
		
		if( (A == 1) && (B == 1) && (C == 1) && lenth >= 5 && lenth <= 10)
		{
			printf("적정한 암호입니다.");
			break;		
		}	
		else
			continue;		
	}	
	
	return 0;
}
*/
	
