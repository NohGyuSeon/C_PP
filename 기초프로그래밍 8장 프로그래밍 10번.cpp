#include <stdio.h>

int add(int, int);
int sub(int, int);
int mult(int, int);
int div(int, int);

int main(void)
{
	int op1, op2, result, quit;
	char op;

	while(1){
		printf("������ �Է��Ͻÿ�(����� Ctrl+C):");
		quit = scanf("%d %c %d", &op1, &op, &op2);
		if( quit != 3 ) 
			return 0; 
		switch(op){
		case '+':
			result = add(op1, op2);
			break;
		case '-':
			result = sub(op1, op2);
			break;
		case '*':
			result = mult(op1, op2);
			break;
		case '/':
			result = div(op1, op2);
			break;
		}
		printf("���� ���:%d\n", result);
	}

	return 0;
}
int add(int op1, int op2)
{
	static int count =0;
	count++;
	printf("������ �� %d�� ȣ��Ǿ����ϴ�\n", count);
	return op1+op2;
}

int sub(int op1, int op2)
{
	static int count =0;
	count++;
	printf("������ �� %d�� ȣ��Ǿ����ϴ�\n", count);
	return op1-op2;
}
int mult(int op1, int op2)
{
	static int count =0;
	count++;
	printf("������ �� %d�� ȣ��Ǿ����ϴ�\n", count);
	return op1*op2;
}
int div(int op1, int op2)
{
	static int count =0;
	count++;
	printf("�������� �� %d�� ȣ��Ǿ����ϴ�\n", count);
	return op1/op2;
}
