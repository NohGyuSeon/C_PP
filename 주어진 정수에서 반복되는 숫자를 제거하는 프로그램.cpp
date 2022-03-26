#include <stdio.h>
// �־��� �������� �ݺ��Ǵ� ���ڸ� �����ϴ� ���α׷� �ۼ�, ���� ��� ���
#define MAX_SIZE 100

typedef struct STACK {
	
	int data[MAX_SIZE];
	int top;
	
}stack;

void stack_init(stack* s) {
	s->top = -1;
}

int is_empty(stack* s) {
	return (s->top == -1);
}

int is_full(stack* s) {
	return (s->top == MAX_SIZE - 1);
}
void stack_push(stack* s, char item) {
	s->data[++(s->top)] = item;
}
	
int stack_pop(stack* s) {

	return s->data[(s->top)--];
}

int main() {
	
	printf("������ �Է��Ͻÿ�: ");
	char input[MAX_SIZE];
	scanf("%s", input);
	
	stack s1, s2;
	stack_init(&s1);
	stack_init(&s2);
	
	int i = 0;
	while (input[i] != NULL) {
		if (input[i] != input[i + 1]) {
			stack_push(&s1, input[i] - '0');
	}
	i++;
}
	while (!is_empty(&s1)) {
		stack_push(&s2, stack_pop(&s1));
	}
	printf("���: ");
	while (!(is_empty(&s2))) {
		printf("%d", stack_pop(&s2));
	}
	return 0;
}

