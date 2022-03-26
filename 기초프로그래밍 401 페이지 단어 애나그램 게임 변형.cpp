#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void mix_word(char *a, char *w) {
    int a_len = strlen(a);
    strcpy(w, a);
    srand(time(NULL));

    for(int i = 0; i < a_len; i++) {
        int pos1 = rand() % a_len;
        int pos2 = rand() % a_len;
        char tmp = w[pos1];
        w[pos1] = w[pos2];
        w[pos2] = tmp;
    }
}

int main()
{
    char answer[] = "Global";
    char mixed_word[255] = {0}, input[255] = {0};
    // �ܾ ���� �ܰ�
    mix_word(answer, mixed_word);
    //printf("����: %s, �ڼ��� �ܾ�: %s\n", answer, mixed_word);

    while(1) {
        printf("%s�� ������ �Է��ϼ���: ", mixed_word);
        scanf("%s", input);

        if(strcmp(answer, input) == 0) {
            printf("�����Դϴ�.\n");
            break;
        }
        else {
            int count = 0;
            for(int i = 0; i < strlen(answer); i++) {
                if(answer[i] == input[i]) {
                    count++;
                }
            }
            printf("��Ȯ�� ��ġ�� ���� ������ %d�Դϴ�.\n", count);
        }
    }

    return 0;
}
