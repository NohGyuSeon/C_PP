#include <stdio.h>
// ���� ������ ����Ͽ� �����϶� 
void save(int amount);

int total;

int main(void)
{
	int n;
	while(1) {
		printf("�󸶸� �����Ͻðڽ��ϱ�? (����� -1) : ");
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
 	printf("���ݱ����� ������� %d�Դϴ�.\n", total);
 }
 // ���� ���� ������ ����Ͽ� �����϶�
 /*
void save(int amount);
int main(void)
{
	int n;
	while(1){
		printf("�󸶸� �����Ͻðڽ��ϱ�?(����� -1): ");
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
	printf("���ݱ����� ������� %d�Դϴ�.\n", total);
}
*/

// ���� ������ ��Ÿ���� �Լ� draw(int amount)�� �ۼ��Ͽ� ����
// ������� ���� ������ ����Ѵ� 
/*
void draw(int amount);
int total;
int main(void)
{
	int n;
	while(1){
		printf("�󸶸� �����Ͻðڽ��ϱ�?(����� -1): ");
		scanf("%d", &n);
		if( n < 0 ) 
			break;
		save(n);
		printf("�󸶸� �����Ͻðڽ��ϱ�?(����� -1): ");
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
	printf("���ݱ����� ������� %d�Դϴ�.\n", total);
}
void draw(int amount)
{
	total -= amount;
	printf("���ݱ����� ������� %d�Դϴ�.\n", total);
}

/*

 
