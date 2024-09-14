#include <stdio.h>

int findLength(const char str[]);

int main() {
    char str[100];

    printf("Enter a wprd: ");
    scanf("%s", str);

    printf("The length of the word is: %d\n", findLength(str));

    return 0;
}

int findLength(const char str[]) {
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    return length;
}