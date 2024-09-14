/*
WAP to convert string into ASCII code
*/
#include <stdio.h>
#include <conio.h>

void convert();

void main() {
    printf("Enter a string: ");
    convert();
    getch();
}

void convert() {
    char str[100];
    int i = 0;
    gets(str);
    
    printf("ASCII codes for the given string are: \n");
    while (str[i] != '\0') {
        printf("Character: %c, ASCII Code: %d\n", str[i], str[i]);
        i++;
    }
}

