#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum type
{
    WN,
    PN
};
union WPN
{
    int wn;
    char pn[10];
};
struct info
{
    enum type kind;
    union WPN n_info;
};

struct employee
{
    char name[100];
    struct info num;
    int age;
};

int main(void)
{
    int i, x, n;
    char name[100];
    int age1, age2;
    char lenth[100];
    int found = 0;
    struct employee e[10];
    scanf("%d", &n);
    scanf("%d", &x);
    
    if (x == 1)
    {
        scanf("%s", name);

        for (int i = 0; i < n; i++)
        {
            scanf("%s %s %d", e[i].name, e[i].num.n_info.pn, &e[i].age);
            if (strlen(e[i].num.n_info.pn) == 3)
            {
                e[i].num.kind = WN;
                e[i].num.n_info.wn = atoi(e[i].num.n_info.pn);
            }
            else
            {
                e[i].num.kind = PN;
            }
        }

        for (i = 0; i < n; i++)
        {
            if (strcmp(name, e[i].name) == 0)
            {
                if (e[i].num.kind == PN)
                    printf("%s %s %d", e[i].name, e[i].num.n_info.pn, e[i].age);
                else
                    printf("%s %d %d", e[i].name, e[i].num.n_info.wn, e[i].age);
                found = 1;
            }
        }
        if (found == 0)
            printf("-1");
    }
    
    else if (x == 2)
    {
        scanf("%d", &age1);
        scanf("%d", &age2);
        for (int i = 0; i < n; i++)
        {
            scanf("%s %s %d", e[i].name, e[i].num.n_info.pn, &e[i].age);
            if (strlen(e[i].num.n_info.pn) == 3)
            {
                e[i].num.kind = WN;
                e[i].num.n_info.wn = atoi(e[i].num.n_info.pn);
            }
            else
            {
                e[i].num.kind = PN;
            }
        }
        for (i = 0; i < n; i++)
        {
            if (e[i].age >= age1 && e[i].age <= age2)
            {
                if (e[i].num.kind == PN)
                    printf("%s %s %d", e[i].name, e[i].num.n_info.pn, e[i].age);
                else
                    printf("%s %d %d", e[i].name, e[i].num.n_info.wn, e[i].age);
                found = 1;
            }
        }
        if (found == 0)
            printf("-1");
    }
    
    return 0;
}
