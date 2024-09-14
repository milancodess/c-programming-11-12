/*
WAP that reads a number from the user and reverses its digits.
*/
#include <stdio.h>
#include <conio.h>

int reverse_number();

void main() {
    int reversed;
    printf("Enter a number to reverse: ");
    reversed = reverse_number();
    printf("Reversed number: %d", reversed);
    getch();
}

int reverse_number() {
    int num, reversed = 0;
    scanf("%d", &num);

    while (num != 0) {
        int remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    return reversed;
}

