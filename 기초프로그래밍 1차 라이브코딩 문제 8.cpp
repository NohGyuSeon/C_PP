#include <stdio.h>
#define MAX 10

int main(void)
{
    int a[MAX][MAX];
    int N, count = 10;
    int i, j;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (i <= j )
                a[i][j] = --count;
            else
                a[i][j] = 0;
        }
        count = 10;
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
