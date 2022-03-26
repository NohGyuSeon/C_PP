#include <stdio.h> 

int main(void)
{
	int i = 0;
	
	while(i < 10) { 
		if(i % 2 == 1) {
			i++;
			continue;
		}
		else {
			printf("%d\n", i); 
			i++;
		}
	}
	return 0;
	
	/*
		int i = 0;
		
		while(i++ < 10) {
			if(i % 2 == 1) {
				continue;
		}
		printf("%d\n", i);
	}
	
	*/ 
}
