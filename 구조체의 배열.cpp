#include <stdio.h>  // stdio.h -> 입출력 함수에 대한 정보를 지닌 헤더파일 
#define SIZE 5     // '학생' 구조체에서 '학생' 의 총 수를 5로 정의한다.

struct student {      // student 구조체 정의 
	int number;      // 정수형 -> 학번  
	char name[20];  // char형 배열 -> 이름
	double grade;  // double형 GPA -> 학점 => double형은 "%lf"를 입력받음 
};                // 구조체 문장의 끝

int main(void)  // main() 함수를 정의하는 문장이다. void -> 반환 값 없음 
{              // main 함수의 시작 
	struct student list[SIZE]; // '학생' 구조체에서 list라는 이름의 구조체 배열을 만듦 
 	int i;     // 정수형 i 선언  
	
	for(i = 0; i < SIZE; i++)   // for문 실행, i는 0부터 SIZE까지 1씩 증가하며 반복적으로 수행 
		{ // 함수의 시작  
			printf("학번을 입력하세요 : ");     // "학번을 입력하세요 : " 출력  
			scanf("%d", &list[i].number);      // 구조체의 첫번째 인덱스에 해당하는 학생의 학번을 입력받음   
			printf("이름을 입력하세요 : ");   // "이름을 입력하세요 : " 출력
			scanf("%s", &list[i].name);      // 구조체의 첫번째 인덱스에 해당하는 학생의 이름을 입력받음
			printf("학점을 입력하세요 : "); // "학점을 입력하세요 : " 출력
			scanf("%lf", &list[i].grade);  // 구조체의 첫번째 인덱스에 해당하는 학생의 학점을 입력받음
		} // 함수의 끝                    // RAM에 학생들의 정보가 일시적으로 저장되어 있음 
		
	for(i = 0; i < SIZE; i++)   // for문 실행, i는 0부터 SIZE까지 1씩 증가하며 반복적으로 수행      
	{ // 함수의 시작
		printf("학번 : %d, 이름 : %s, 학점 : %.1f\n", list[i].number, list[i].name, list[i].grade);
	} // 함수의 끝 
	                        // 학번 정수형 출력, 이름 문자열 형태 출력, 학점 실수형 출력 
	return 0;     // 정수 값 반환                 
}                // main 함수의 끝 

