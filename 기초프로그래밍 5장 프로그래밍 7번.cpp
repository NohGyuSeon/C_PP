#include <stdio.h>
#include <math.h>

int main(void)
{
	int nInputA = 0, nInputB = 0, nInputC = 0;
	double dResultA = 0.0, dResultB = 0.0;
	double dDiscriminant = 0.0;

	printf("계수 a를 입력하시오 : ");
	scanf("%d", &nInputA);
	
	printf("계수 b를 입력하시오 : ");
	scanf("%d", &nInputB);
	
	printf("계수 c를 입력하시오 : ");
	scanf("%d", &nInputC);

	if(nInputA == 0)
	{
		dResultA = (double)(-nInputC)/nInputB;
		printf("위의 이차 방정식의 실근은 %.2lf입니다.\n", dResultA);
	}
	else
	{
		dDiscriminant = sqrt(pow(nInputB,2)-(4*nInputA*nInputC));
		if(dDiscriminant<0.0)
		{
			printf("판별식이 음수이므로 실근이 존재하지 않습니다.\n");
		}
		else
		{
			dResultA = ((double)(-nInputB) + dDiscriminant) / (2 * nInputA);
			dResultB = ((double)(-nInputB) - dDiscriminant) / (2 * nInputA);
			printf("위의 이차 방정식의 실근은 %.2lf과 %.2lf입니다.\n", dResultA, dResultB);
		}
	}

	return 0;
}
