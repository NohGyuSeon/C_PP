#include <stdio.h> 
#include <string.h>
#define SIZE 20

int main(void) {
	
	int n; // �Է¹��� ���� ���� (0���� ū ���� �Է�) 
	
	/*
	char num[20]���� �����ϰ� num = (n%2 == 0) ? "even number" : "odd number"; ���� �ڵ� �ۼ���
	"even number" �� "odd number" �� �޸� �ּҰ��� �迭�� �����Ϸ��� �ϰ� �ǹǷ�  
	"error:assignment to expression with array type" ������ �߻��Ѵ�. 
	*/
						 
	// ù��° Ǯ��
	/*
	const char* num1[SIZE]; // ����� ������ ���� ���� 
	
	while(1) {
		printf("���� �Է� : ");
		scanf("%d", &n);  
		printf("�Է��� ������ %d\n", n);
		if (n > 0)
		{
			num1[SIZE] = (n%2 == 0) ? "even number" : "odd number"; // ¦��, Ȧ���� ���ǿ����ڷ� ǥ���Ͽ� num[SIZE]�� �ּҰ��� ���ڿ��� �޸� �ּҰ��� ���� 
			break; // 0���� ū ���� �Է� �� while�� Ż�� 
		}
		else
		{
			printf("0���� ū ������ �Է��ϼ���\n\n");
			continue;
		}	
	}
	
	printf("%s", num1[SIZE]);   // ����� ���
	*/
	
	// �ι�° Ǯ��
	/*
	char num2[20]; // ����� ������ ���� ����  
	
	while(1) {
		printf("���� �Է� : ");
		scanf("%d", &n); 
		printf("�Է��� ������ %d\n", n);
		if (n > 0)
		{
			strcpy(num2, (n%2 == 0) ? "even number" : "odd number"); // ¦��, Ȧ���� ���ǿ����ڷ� ǥ���Ͽ� num �迭�� ���ڿ� ���� 
			break; // while�� Ż�� 
		}
		else
		{
			printf("0���� ū ������ �Է��ϼ���\n\n");
			continue;
		}		
	}
	
	printf("%s", num2);   // ����� ���
	*/

	return 0;
}
