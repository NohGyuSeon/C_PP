#include <stdio.h>

int prime(int x);
int n;

 int main(void)
 {
 	scanf("%d", &n);
 	for(int i=2; i<n; i++)
 	{
	 	if(prime(i) == 1) {
			printf("%d ", i);
		}
	 }
	return 0; 
 }
 
int prime(int x)
{
	for(int i=2; i<x; i++)
	{
		if(x%i == 0) {
			return 0;
		}
	}
	return 1;
 } 
 
