#include <stdio.h>
#define WIDTH 10
#define HEIGHT 10

void brighten_image(char *p, int n);

int main(void)
{
	char image[HEIGHT * WIDTH] = {
		0,0,0,0,9,0,0,0,0,0,
		0,0,0,9,9,0,0,0,0,0,
		0,0,9,0,9,0,0,0,0,0,
		0,0,0,0,8,0,0,0,0,0,
		0,0,0,0,9,0,0,0,0,0,
		0,0,0,0,7,0,0,0,0,0,
		0,0,0,0,8,0,0,0,0,0,
		0,0,0,0,9,0,0,0,0,0,
		0,0,0,0,9,0,0,0,0,0,
		0,0,6,6,9,7,7,0,0,0};
	brighten_image(image, 100);
	
	for(int i=0; i<100; i++)
		printf("%d", image[i]);
	 
	return 0;
 } 
 
void brighten_image(char *p, int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		if(p[i] > 0)
		{
			p[i]--;
		}
	}
}
