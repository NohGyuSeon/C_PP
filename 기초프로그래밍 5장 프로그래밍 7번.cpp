#include <stdio.h>
#include <math.h>

int main(void)
{
	int nInputA = 0, nInputB = 0, nInputC = 0;
	double dResultA = 0.0, dResultB = 0.0;
	double dDiscriminant = 0.0;

	printf("��� a�� �Է��Ͻÿ� : ");
	scanf("%d", &nInputA);
	
	printf("��� b�� �Է��Ͻÿ� : ");
	scanf("%d", &nInputB);
	
	printf("��� c�� �Է��Ͻÿ� : ");
	scanf("%d", &nInputC);

	if(nInputA == 0)
	{
		dResultA = (double)(-nInputC)/nInputB;
		printf("���� ���� �������� �Ǳ��� %.2lf�Դϴ�.\n", dResultA);
	}
	else
	{
		dDiscriminant = sqrt(pow(nInputB,2)-(4*nInputA*nInputC));
		if(dDiscriminant<0.0)
		{
			printf("�Ǻ����� �����̹Ƿ� �Ǳ��� �������� �ʽ��ϴ�.\n");
		}
		else
		{
			dResultA = ((double)(-nInputB) + dDiscriminant) / (2 * nInputA);
			dResultB = ((double)(-nInputB) - dDiscriminant) / (2 * nInputA);
			printf("���� ���� �������� �Ǳ��� %.2lf�� %.2lf�Դϴ�.\n", dResultA, dResultB);
		}
	}

	return 0;
}
