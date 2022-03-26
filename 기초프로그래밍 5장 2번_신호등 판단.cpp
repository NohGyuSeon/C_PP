#include<stdio.h>

int main(){
    
    char x;
    
    scanf("%c", &x);
    
    switch(x){
	case 'r':
		printf("정지");
		break;
	case 'g':
		printf("진행");
		break;
	case 'y':
		printf("주의");
		break;
	default:
		printf("-1"); 
		break;
	}
	
	return 0;
}

