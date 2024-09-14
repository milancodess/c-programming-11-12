#include <stdio.h>

void findEvenNumber(int current, int limit);

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 2) {
        printf("Even numbers from 2 to %d are: \n", number);
        findEvenNumber(2, number);
    } else {
        printf("No even numbers in the specified range.\n");
    }

    return 0;
}

void findEvenNumber(int current, int limit) {
    if (current > limit) {
        return;
    }
    printf("%d\n", current);
    findEvenNumber(current + 2, limit);
}