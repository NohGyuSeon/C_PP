#include <stdio.h>

int main(void) {
	
int x, y, z;

scanf("%d %d %d", &x, &y, &z);

if( x+y <= z || y+z < x || z+x <= y) {
	printf("-1");
	}
	else if(x==y && y==z && z==x) {
		printf("���ﰢ��");
	}
	
	else if(x==y || y==z || z==x) {
		printf("�̵�ﰢ��");
	}
	
	else {
		printf("�Ϲݻﰢ��");
	}
	
	return 0;
}

