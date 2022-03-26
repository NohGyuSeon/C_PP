#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

#define SIZE 10

int main()
{
    int num[SIZE] = {0};
    int i, k;
    srand(time(NULL));
    for(i = 0; i < SIZE; i++) {
        num[i] = rand() % 100 + 1;
    }
    printf("before sorting...\n");
    for(i = 0; i < SIZE; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

    for(k = 0; k < SIZE; k++) {
        for(i = 0; i < SIZE -1 - k; i++) {
            if(num[i] > num[i+1]) {
                int tmp = num[i+1];
                num[i + 1] = num[i];
                num[i] = tmp;
            }
        }
    }

    printf("after sorting...\n");
    for(i = 0; i < SIZE; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
}
