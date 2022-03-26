#include <stdio.h>
#define SM_PER_PY 3.3058

int main(void)			
{
	double py, sm;
	printf("면적을 제곱미터 단위로 입력하시오: ");
	scanf("%lf",&sm);
	py = sm / SM_PER_PY;
	printf("%.2lf제곱미터는 %.2lf평입니다.\n",sm,py);
	
	return 0;
} 
