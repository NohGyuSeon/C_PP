#include <stdio.h>   // stdio.h -> 입출력 함수에 대한 정보를 지닌 헤더파일 
                    // stdio.h 헤더 파일을 포함시킨다. 
int main(void)     // main() 함수를 정의하는 문장이다. void -> 반환 값 없음 
{                 // main 함수의 시작 
	int number = 10;   // 정수형 변수 number 선언
	int *p;           // 포인터 p의 선언

	p = &number;     // 변수 number의 주소가 포인터 p로 대입
	printf("변수 number의 값 = %d\n", number);   // 10이 저장된 변수 number의 값 출력 

	*p = 20;   // 포인터 p가 가리키는 위치에 20을 저장
	printf("변수 number의 값 = %d\n", number);   // 20이 저장된 변수 number의 값 출력

	return 0;   // 정수 값 반환 
}              // main 함수의 끝 

// 간접 참조 연산자 *를 이용하여서 포인터가 가리키는 변수의 값을 변경할 수 있다.

