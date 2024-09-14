/*
WAP to check if the string is palindrome or not
*/
#include <stdio.h>
#include <string.h>
#include <conio.h>

int is_palindrome();

void main() {
    if (is_palindrome()) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    getch();
}

int is_palindrome() {
    char str[100];
    int length, i;
    printf("Enter a string: ");
    gets(str);
    length = strlen(str);
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0;
        }
    }
    return 1;
}

