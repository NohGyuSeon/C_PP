#include <stdio.h>
// 전역 변수를 사용하여 구현하라 
void save(int amount);

int total;

int main(void)
{
	int n;
	while(1) {
		printf("얼마를 저축하시겠습니까? (종료는 -1) : ");
		scanf("%d", &n);
		if( n < 0)
			break;
		save(n);
	}
	return 0;
 } 
 void save(int amount)
 {
 	total += amount;
 	printf("지금까지의 저축액은 %d입니다.\n", total);
 }
 // 정적 지연 변수를 사용하여 구현하라
 /*
void save(int amount);
int main(void)
{
	int n;
	while(1){
		printf("얼마를 저축하시겠습니까?(종료는 -1): ");
		scanf("%d", &n);
		if( n < 0 ) 
			break;
		save(n);
	}
	return 0;
}
void save(int amount)
{
	static int total;
	total += amount;
	printf("지금까지의 저축액은 %d입니다.\n", total);
}
*/

// 예금 인출을 나타내는 함수 draw(int amount)도 작성하여 보자
// 저축액은 전역 변수를 사용한다 
/*
void draw(int amount);
int total;
int main(void)
{
	int n;
	while(1){
		printf("얼마를 저축하시겠습니까?(종료는 -1): ");
		scanf("%d", &n);
		if( n < 0 ) 
			break;
		save(n);
		printf("얼마를 인출하시겠습니까?(종료는 -1): ");
		scanf("%d", &n);
		if( n < 0 ) 
			break;
		draw(n);
	}
	return 0;
}
void save(int amount)
{
	total += amount;
	printf("지금까지의 저축액은 %d입니다.\n", total);
}
void draw(int amount)
{
	total -= amount;
	printf("지금까지의 저축액은 %d입니다.\n", total);
}

/*

 
