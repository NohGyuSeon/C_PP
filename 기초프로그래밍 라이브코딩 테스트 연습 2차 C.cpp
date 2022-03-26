#include <stdio.h>

void get(double value, int* i_part, double* f_part);

int main()
{
    double in_num;
    int i_p;
    double f_p;

    scanf("%lf", &in_num);
 
    get(in_num, &i_p, &f_p);
    
    printf("%d %f", i_p, f_p); 

    return 0;
}

void get(double value, int* i_part, double* f_part) {
    
    *i_part = value / 1;
    *f_part = value - *i_part;
}
