/*
WAP that counts total length of a string
*/
#include <stdio.h>
#include <conio.h>

int calculate_length();

void main() {
    int length;
    printf("Enter a string: ");
    length = calculate_length();
    printf("The length of the string is: %d\n", length);
    getch();
}

int calculate_length() {
    char str[100];
    int i = 0;

    gets(str);
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

