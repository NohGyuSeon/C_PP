#include <stdio.h>

int main(void)
{
	int score;
	char grade;
	
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &score);
	
	if (score >= 90)
		grade = 'A';
	else if (score >= 80)
		grade = 'B';
	else if (score >= 70)
		grade = 'C';
	else if (score >= 60)
		grade = 'D';
	else
		grade = 'F';         
		
	printf("���� %c \n", grade);
	
	// if�� else if�� ���� -> if�� �ϳ��� �������� ���ǹ��̹Ƿ� 100�� �Է�������,
	//                        ��� ���� �Է¹޾Ƽ� 'D'�� ��µ�
	// else if -> if���� ���� ���� �� ���� �Է¹��� �ʰ� �Ѿ
                                                     

	
	return 0;
}
