#include <stdio.h>

int main(void)
{
	int count = 0;
	while (1) {
		printf("���ڸ� �Է��Ͻÿ�: (���� .)");
		char c = getchar();
		getchar(); // ����Ű�� ���ش�. 
		if (c == 'a')
			count++;
		if (c == '.')
			break;
	}
	printf("a�� ���� = %d \n", count);
	return 0;
}
