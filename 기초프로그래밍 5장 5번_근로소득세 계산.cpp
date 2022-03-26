#include <stdio.h>

int main(){

	int income;
    int tax;
    
    scanf("%d", &income);
    
    if (income <= 1000) {
        tax = income * 0.08;
    }
    else if (income <= 4000) {
        tax = 1000 * 0.08 + (income - 1000) * 0.17;
    }
    else if (income <= 8000) {
        tax = 1000 * 0.08 + 3000 * 0.17 + (income - 4000) * 0.26;
    }
    else {
        tax = 1000 * 0.08 + 3000 * 0.17 + 4000 * 0.26 + (income - 8000) * 0.35;
    }
    
    printf("%d", tax);
    
	return 0;
}
