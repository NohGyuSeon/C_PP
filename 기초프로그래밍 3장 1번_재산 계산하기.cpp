#include <stdio.h>
#define MAX_PROPERTY 10000000
#define MAX_SAVING 30

int main(void)
{
	long long int property; // 오버플로우 방지 위해 long long형 선언
	long long int saving;
	long long int sum;
	
	scanf("%lld", &property);
	scanf("%lld", &saving); // long long형 형식 지정자 "%lld" 
	
	sum = property * saving * 12;	 
	printf("%lld\n", sum);
	 

	return 0;        
}
