#include <stdio.h>
#include <string.h>

void reverse_str(char * str) {

  int i = 0, j = 0;
  j = strlen(str); 
  char New_str[100];
  
  for(i=0; i<j; i++)
  {
  	New_str[i] = str[j-i-1];
  }

  New_str[j] = '\0';	
  strcpy(str, New_str);

  printf("%s", str);
}

int main()
{
	char array[100];
	scanf("%s", array);
	
	reverse_str(array);
		
	return 0;
}
