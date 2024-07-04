#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// コイントスの結果をカウントする関数
void coin_toss(int *heads_count, int *tails_count) {
    if (rand() % 2 == 0) {
        (*heads_count)++;
    } else {
        (*tails_count)++;
    }
}

int main() {
    char name[100];
    int heads_count = 0, tails_count = 0;

    // ユーザー名を尋ねる
    printf("Who are you?\n> ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

    // コイントスを行う
    printf("Tossing a coin...\n");
    srand(time(NULL));
    for (int i = 1; i <= 3; i++) {
        coin_toss(&heads_count, &tails_count);
        if (rand() % 2 == 0) {
            printf("Round %d: Heads\n", i);
            heads_count++;
        } else {
            printf("Round %d: Tails\n", i);
            tails_count++;
        }
    }

    // 結果を表示
    printf("Heads: %d, Tails: %d\n", heads_count, tails_count);

    // 勝敗メッセージを表示
    if (heads_count > tails_count) {
        printf("%s won!\n", name);
    } else {
        printf("%s lost!\n", name);
    }

    return 0;
}
