// �� �� �߿��� ū ���� ã�� �Լ� ����
#include <stdio.h>

// �Լ��� �����Ѵ�.
int get_integer()
{
	int value;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &value);
	return value;
 } 
 
 // �Լ��� �����Ѵ�.
 int get_max(int x, int y) 
 {
	if (x>y) return(x);
	else return(y);
  } 
  
  int main(void) {
  	int a = get_integer(); // �Լ� ȣ�� 
  	int b = get_integer(); // �Լ� ȣ�� 
  	
  	printf("�� �� �߿��� ū ���� %d�Դϴ�.\n", get_max(a, b)); // �Լ� ȣ�� 
  	return 0;	
  }
