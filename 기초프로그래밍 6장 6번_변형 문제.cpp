#include <stdio.h>
int main(void)
{
	int i, value=0;
	int x, y, z;
	int count = 0;
	scanf("%d", &i);
	
	if(i>=100 && i<=1000) {
		for(value=1; value<=i; value++) {
			x = value % 10;
			if( x==3 ) {
				count++;
			}
		}
		for(value=1; value<=i; value++) {
			y = (value / 10) % 10;
			if( y==3 ) {
				count++;
			}
		}
		for(value=1; value<=i; value++) {
			z = (value / 100);
			if( z==3 ) {
				count++;
			}
		}
		
		printf("%d", count);
	}
	
	return 0;
}

