/*
WAP to calculate the length of a string using pointers.
*/
#include <stdio.h>

void main() {
    char str[100];
    char *ptr;
    int length = 0;

    printf("Enter a string: ");
    gets(str);

    ptr = str;

    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    printf("Length of the string is: %d\n", length);
    getch();
}


