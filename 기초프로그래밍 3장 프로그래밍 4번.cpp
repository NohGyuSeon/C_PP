#include <stdio.h>
#define SM_PER_PY 3.3058

int main(void)			
{
	double py, sm;
	printf("������ �������� ������ �Է��Ͻÿ�: ");
	scanf("%lf",&sm);
	py = sm / SM_PER_PY;
	printf("%.2lf�������ʹ� %.2lf���Դϴ�.\n",sm,py);
	
	return 0;
} 
