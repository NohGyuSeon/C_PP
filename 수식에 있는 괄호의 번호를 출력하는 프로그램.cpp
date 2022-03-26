#include <stdio.h>
/*
	( �� ������ stack�� count�� ����, count�� �÷��ش�.
	) �� ������ stack�� pop�� �Ѵ�.
	) �� ������ ���� ����� ( �� ¦���̹Ƿ� ������ top�� ¦���� �ȴ�.
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
	printf("���� : ");
	scanf("%s", input);
	printf("��ȣ �� : ");
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
