#include <stdio.h>
/*
	( 를 만나면 stack에 count를 저장, count를 올려준다.
	) 를 만나면 stack에 pop을 한다.
	) 를 만나면 제일 가까운 ( 와 짝꿍이므로 스택의 top과 짝꿍이 된다.
*/
#define max_size 100

typedef struct Stacktype {
	int stack[max_size];
	int top;
}Stacktype;

void Stack_init(Stacktype* s) {
	s->top = -1;
}

void Stack_push(Stacktype* s, int item) {
	s->stack[++(s->top)] = item;
	return;
}

bool is_empty(Stacktype* s) {
	return s->top == -1;
}

int Stack_pop(Stacktype* s) {
	
	return s->stack[(s->top)--];
}

int main(void) {
	Stacktype s;
	Stack_init(&s);
	char input[max_size] = {};
	printf("수식 : ");
	scanf("%s", input);
	printf("괄호 수 : ");
	int i = 0, count = 1;
	while (input[i] != NULL) {
		if (input[i] == '('){
			Stack_push(&s, count);
			printf("%d ", count);
			count++;
		}
		else {
			printf("%d ", Stack_pop(&s));
		}
		i++;
	} 
	
	return 0;
}
