#include <stdio.h>
#include <string.h>

int main(void) {
	char solution[100] = "meet at midnight"; // ������ ����ִ� ���ڹ迭 
	char answer[100] = "____ __ ________"; // ������� ����ڰ� ���� ���ڿ� 
	char ch;
	int i;
	
	while(1) {
		printf("%\n ���ڿ��� �Է��Ͻÿ� : %s \n", answer);
		printf("���ڸ� �����Ͻÿ� : ");
		ch = getchar();
		
		// ����ڰ� �Է��� ���ڸ� answer[]�� �־ ������ ���Ѵ�.
		for(i=0; solution[i] != NULL; i++) {
			
			// ����ڰ� ���߾����� ���ڸ� ���̰� �Ѵ�.
			if (solution[i] == ch)
				answer[i] = ch; 
		} 
		if (strcmp(solution, answer) == 0) break; // ����� ��ġ�ϴ����� �˻� 
	}
	
	return 0;	
} 
