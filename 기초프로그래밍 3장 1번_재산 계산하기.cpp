#include <stdio.h>
#define MAX_PROPERTY 10000000
#define MAX_SAVING 30

int main(void)
{
	long long int property; // �����÷ο� ���� ���� long long�� ����
	long long int saving;
	long long int sum;
	
	scanf("%lld", &property);
	scanf("%lld", &saving); // long long�� ���� ������ "%lld" 
	
	sum = property * saving * 12;	 
	printf("%lld\n", sum);
	 

	return 0;        
}
