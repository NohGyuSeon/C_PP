#include <stdio.h>
#define PI 3.141592

int get_integer() {
	
	int num;
	printf("���� ������ �Է� : ");
	scanf("%d", &num);
	
	return num;
}

int main(void) {
	
	int r;
	r = get_integer();
	printf("���� �ѷ��� : %f\n", 2*PI*r);
	printf("���� ���̴� : %f", PI*PI*r);
	
	return 0;	
}
