#include <stdio.h>
#include <conio.h>

int main(void)
{
	FILE *fp;
	char file[100];
	char buffer[1000];
	int line_count;
	
	printf("���� �̸��� �Է��Ͻÿ�:  ");
	scanf("%s", file);	

	if( (fp = fopen(file, "r")) == NULL );
	{
		fprintf(stderr,"���� %s�� �� �� �����ϴ�.\n", file);
		exit(1);
	}

	line_count = 0;
	while( fgets(buffer, 1000, fp) != NULL )
	{
		printf("%s\n", buffer);
		if( ++line_count >= 20 )
		{
			getch();
			line_count = 0;
		}
	}
	fclose(fp);
	
	return 0;
}
