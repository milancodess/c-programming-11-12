#include <stdio.h>
#include <string.h>

int compareWords(const char w1[], const char w2[]);

int main() {
    char w1[100], w2[100];

    printf("Enter the first string: ");
    scanf("%s", w1);

    printf("Enter the second string: ");
    scanf("%s", w2);

    if (compareWords(w1, w2) == 0) {
        printf("The strings are the same.\n");
    } else {
        printf("The strings are different.\n");
    }

    return 0;
}

int compareWords(const char w1[], const char w2[]) {
    int len1 = strlen(w1);
    int len2 = strlen(w2);

    if (len1 != len2) {
        return 1;
    }

    int i = 0;
    while (i < len1) {
        if (w1[i] != w2[i]) {
            return 1;
        }
        i++;
    }

    return 0;
}