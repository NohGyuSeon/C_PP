#include <stdio.h>

int main(void) {

    int i, x, y, sum=0;

    printf("��������: ");
    scanf("%d", &x);
    printf("��������: ");
    scanf("%d", &y);
 
    for (i=x; i<=y; i++){
        sum += i;
    }
    printf("Sum of %d to %d = %d\n", x, y, sum);

    return (0);
}

