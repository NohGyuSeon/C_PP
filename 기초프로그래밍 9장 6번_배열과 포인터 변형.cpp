#include <stdio.h>

int array[] = { 0 };
int *v = array;

void sort_array(int *v, int n, int m);

int main(void)
{
	int i, x, y;
	scanf("%d %d \n", &x, &y);

	if(x<=10)
	{
		for(i=0; i<x; i++)
		{
			scanf("%d", v+i);
		}
	}
	
	sort_array(array, x, y);
	
	return 0;
}

void sort_array(int *v, int n, int m)
{
	if(m == 0)
	{
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n-1-i; j++)
			{
				if(array[j] > array[j+1])
				{
					int tmp = *(v+j);
					*(v+j) = *(v+j+1);
					*(v+j+1) = tmp;
				}
			}
		}
	}
	
	if(m == 1)
	{
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n-1-i; j++)
			{
				if(array[j] < array[j+1])
				{
					int tmp = *(v+j);
					*(v+j) = *(v+j+1);
					*(v+j+1) = tmp;
				}
			}
		}
	}
	
	for(int i=0; i<n; i++)
	{
		printf("%d ", *(v+i)); 
	}
}

/*
#include <stdio.h>

void sort_array(int *v, int n, int m);

int main()

{
    int i, logic;
    int n = 0;

    scanf("%d", &n); 
    int array[n];
    int *v = array;
    scanf("%d", &logic);
    
    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }
 
    sort_array(v, n, logic);
    for(i=0; i<n; i++)
    {
        printf("%d ", *(v+i));    
    }

    return 0;
} 

void swap_up(int *px, int *py)
{
    int tmp, a, b;
    a = *px;
	b = *py;
    
    if(a > b)
    {
        tmp = *px;
        *px = *py;
        *py = tmp;        
    }
}

void swap_down(int *px, int *py)

{
    int tmp, a, b;
    a = *px;
    b = *py;
    
    if(a < b)
    {
        tmp = *px;
        *px = *py;
        *py = tmp;        
    }
}

void sort_array(int *v, int n, int m)

{
    int i, j;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        { 
            if (m == 0)
            {
          	  swap_up(v+j, v+j+1);
            }
            else if (m == 1)
            {
                swap_down(v+j, v+j+1);
            }
        }
    }
}
*/





