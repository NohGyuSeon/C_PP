#include <stdio.h>

int sum_array(int *v, int i, int j){
	
	int sum = 0;
	int k = 0;
	
	for(k=i; k<=j; k++)
	{
		sum += v[k];
	}
	
	printf("%d", sum);
	
	return 0;
}

int main(void)
{
	int n, x, y;
	scanf("%d %d %d", &n, &x, &y);
	
	int array[n];
	int *v = array;
	
	for(int k=0; k<n; k++)
	{
		scanf("%d", v+k);
	}
	
	sum_array(v, x, y);
	
  return 0;
}







