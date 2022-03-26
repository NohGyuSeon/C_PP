#include <stdio.h>

int my_strlen(char *str) {
	int count = 0;
	while(str[count] != '\0')
	{
		count++;
	}
	
	return count;
}

int my_strcat(char *dst, char *src) {
	int i = 0;
	int dst_len = my_strlen(dst);
	while(src[i] != '\0')
	{
		dst[dst_len+i] = src[i];
		i++;
	}
	dst[dst_len+i] = '\0';
	
	return i;
}

int main()
{
	char dst[100];
	char src[100];
	scanf("%s", dst);
	scanf("%s", src);
	
	my_strcat(dst, src);
	
	printf("%s", dst);
	
  return 0;
}
