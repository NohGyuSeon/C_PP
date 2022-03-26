#include <stdio.h>
#include <string.h>

#define NUMS 5

int main()
{
    char dic_word[NUMS][2][10] = {
            {"book", "책"},
            {"boy", "소년"},
            {"computer", "컴퓨터"},
            {"language", "언어"},
            {"rain", "비"}
    };
    char found = 0;
    char input[30];

    printf("영어 단어를 입력하세요: ");
    scanf("%s", input);

    for(int i = 0; i < NUMS; i++) {
        if(strcmp(input, dic_word[i][0]) == 0) {
            printf("%s의 뜻은 %s입니다.\n", input, dic_word[i][1]);
            found = 1;
        }
    }

    if(!found) {
        printf("사전에서 발견되지 않았습니다.\n");
    }
    return 0;
}

	









