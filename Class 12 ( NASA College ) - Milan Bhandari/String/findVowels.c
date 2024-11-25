#include <stdio.h>

int main() {
    char word[20];
    int i, total = 0;

    printf("Enter word: ");
    scanf("%s", word);

    i = 0;
    while (word[i] != '\0') {
        if (word[i] == 'a' || word[i] == 'A' ||
            word[i] == 'e' || word[i] == 'E' ||
            word[i] == 'i' || word[i] == 'I' ||
            word[i] == 'o' || word[i] == 'O' ||
            word[i] == 'u' || word[i] == 'U') {
            total++;
        }
        i++;
    }

    printf("Total vowels: %d\n", total);
    return 0;
}
