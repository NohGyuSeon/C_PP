#include<stdio.h>

int main(){
    
    char x;
    
    scanf("%c", &x);
    
    switch(x){
	case 'r':
		printf("����");
		break;
	case 'g':
		printf("����");
		break;
	case 'y':
		printf("����");
		break;
	default:
		printf("-1"); 
		break;
	}
	
	return 0;
}

