#include <stdio.h> 
#include <string.h>
#define SIZE 20

int main(void) {
	
	int n; // 입력받을 변수 선언 (0보다 큰 정수 입력) 
	
	/*
	char num[20]으로 선언하고 num = (n%2 == 0) ? "even number" : "odd number"; 으로 코드 작성시
	"even number" 와 "odd number" 의 메모리 주소값을 배열에 저정하려고 하게 되므로  
	"error:assignment to expression with array type" 에러가 발생한다. 
	*/
						 
	// 첫번째 풀이
	/*
	const char* num1[SIZE]; // 결과값 저장할 변수 선언 
	
	while(1) {
		printf("정수 입력 : ");
		scanf("%d", &n);  
		printf("입력한 정수는 %d\n", n);
		if (n > 0)
		{
			num1[SIZE] = (n%2 == 0) ? "even number" : "odd number"; // 짝수, 홀수를 조건연산자로 표현하여 num[SIZE]의 주소값에 문자열의 메모리 주소값을 저장 
			break; // 0보다 큰 정수 입력 시 while문 탈출 
		}
		else
		{
			printf("0보다 큰 정수만 입력하세요\n\n");
			continue;
		}	
	}
	
	printf("%s", num1[SIZE]);   // 결과값 출력
	*/
	
	// 두번째 풀이
	/*
	char num2[20]; // 결과값 저장할 변수 선언  
	
	while(1) {
		printf("정수 입력 : ");
		scanf("%d", &n); 
		printf("입력한 정수는 %d\n", n);
		if (n > 0)
		{
			strcpy(num2, (n%2 == 0) ? "even number" : "odd number"); // 짝수, 홀수를 조건연산자로 표현하여 num 배열에 문자열 복사 
			break; // while문 탈출 
		}
		else
		{
			printf("0보다 큰 정수만 입력하세요\n\n");
			continue;
		}		
	}
	
	printf("%s", num2);   // 결과값 출력
	*/

	return 0;
}
