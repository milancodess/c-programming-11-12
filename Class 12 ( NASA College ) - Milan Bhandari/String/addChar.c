#include <stdio.h>

void addString(char w1[], char w2[], char result[]);

int main() {
    char w1[100], w2[100], result[200];

    printf("Enter the first word: ");
    scanf("%s", w1);

    printf("Enter the second word: ");
    scanf("%s", w2);

    addString(w1, w2, result);

    printf("%s\n", result);

    return 0;
}

void addString(char w1[], char w2[], char result[]) {
    int i = 0, j = 0;

    while (w1[i] != '\0') {
        result[i] = w1[i];
        i++;
    }

    while (w2[j] != '\0') {
        result[i] = w2[j];
        i++;
        j++;
    }
    result[i] = '\0';
}