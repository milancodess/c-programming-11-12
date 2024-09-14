#include <stdio.h>

void reverseWords(char w[]);

int main() {
    char w[100];

    printf("Enter a string: ");
    scanf("%s", w);

    reverseWords(w);

    printf("The reversed string is: %s\n", w);

    return 0;
}

void reverseWords(char w[]) {
    int i = 0;
    int j = 0;
    char temp;

    while (w[j] != '\0') {
        j++;
    }
    j--;

    while (i < j) {
        temp = w[i];
        w[i] = w[j];
        w[j] = temp;
        i++;
        j--;
    }
}