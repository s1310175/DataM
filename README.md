#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Coin toss function
char* coin_toss() {
    return (rand() % 2) ? "Heads" : "Tails";
}

int main() {
    char name[50];
    int heads_count = 0, tails_count = 0;

    srand(time(0));

    printf("Who are you?\n> ");
    scanf("%s", name);

    printf("Hello, %s!\n", name);
    printf("Tossing a coin...\n");

    // Perform 3 rounds of coin toss
    for (int i = 1; i <= 3; i++) {
        char *result = coin_toss();
        printf("Round %d: %s\n", i, result);
        if (result[0] == 'H') {
            heads_count++;
        } else {
            tails_count++;
        }
    }

    printf("Heads: %d, Tails: %d\n", heads_count, tails_count);

    // Print victory message
    if (heads_count > tails_count) {
        printf("%s won!\n", name);
    } else {
        printf("%s lost!\n", name);
    }

    return 0;
}
