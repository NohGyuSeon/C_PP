#include <stdio.h>
#include <string.h>

#define NUMS 5

int main()
{
    char dic_word[NUMS][2][10] = {
            {"book", "å"},
            {"boy", "�ҳ�"},
            {"computer", "��ǻ��"},
            {"language", "���"},
            {"rain", "��"}
    };
    char found = 0;
    char input[30];

    printf("���� �ܾ �Է��ϼ���: ");
    scanf("%s", input);

    for(int i = 0; i < NUMS; i++) {
        if(strcmp(input, dic_word[i][0]) == 0) {
            printf("%s�� ���� %s�Դϴ�.\n", input, dic_word[i][1]);
            found = 1;
        }
    }

    if(!found) {
        printf("�������� �߰ߵ��� �ʾҽ��ϴ�.\n");
    }
    return 0;
}

	









