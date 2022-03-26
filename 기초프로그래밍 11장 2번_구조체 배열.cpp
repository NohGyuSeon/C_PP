#include <stdio.h>
#include <string.h>

struct employee {
	char name[30];
	int number;
	char tel[30];
	int age;
};

int main(void)
{
	int i, x;
	char name[30];
	char tel[30];
	int number, age1, age2;
	char text[100];
	int index[100] = {0};
	
	struct employee e[10] = {
		{ "Jeon", 123, "2345-7890", 32 },
		{ "Kim", 125, "3458-9990", 22 },
		{ "Lee", 133, "7345-9870", 45 },
		{ "Bae", 140, "5321-1234", 54 },
		{ "Kang", 205, "4916-5052", 48 },
		{ "Lee", 245, "2039-3458", 25 }, 
		{ "Kim", 777, "4708-2323", 34 },
		{ "Smith", 900, "6408-3298", 39 },
		{ "Park", 428, "3482-9283", 21 },
		{ "Kim", 973, "8934-2738", 25 }};
		
	scanf("%d", &x);
	if(x==1)
	{
		scanf("%s", name);
		for(i=0; i<10; i++)
		{
			if(strcmp(name, e[i].name) == 0)
			{
				printf("%s %d %s %d\n", e[i].name, e[i].number, e[i].tel, e[i].age);
				strcpy(text, e[i].name);
			}		
		}
		if(strlen(text) < 1)
		{
			printf("%d", -1);
		}
	}
	else if(x==2)
	{
		scanf("%d", &number);
		for(i=0; i<10; i++)
		{
			if(number == e[i].number)
			{
				printf("%s %d %s %d\n", e[i].name, e[i].number, e[i].tel, e[i].age);
				index[0] = e[i].number;
			}	
		}
		if(index[0] == 0)
		{
			printf("%d", -1);
		}	 
	}
	else if(x==3)
	{
		scanf("%s", &tel);
		for(i=0; i<10; i++)
		{
			if(strcmp(tel, e[i].tel) == 0)
			{
				printf("%s %d %s %d\n", e[i].name, e[i].number, e[i].tel, e[i].age);
				strcpy(text, e[i].tel);
			}
		}
		if(strlen(text) < 1)
		{
			printf("%d", -1);
		}		
	}
	else
	{
		scanf("%d", &age1);
		scanf("%d", &age2);
		for(i=0; i<10; i++)
		{
			if(e[i].age >= age1 && e[i].age <= age2)
			{
				printf("%s %d %s %d\n", e[i].name, e[i].number, e[i].tel, e[i].age);
				index[0] = e[i].age;
			}		 
		}	
		if(index[0] == 0)
		{
			printf("%d", -1);
		}
	}
		
	return 0;	
}


