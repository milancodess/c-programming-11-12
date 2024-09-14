/*
WAP to append user input to test.txt and display its entire content.
*/

#include <stdio.h>
#include <conio.h>

void main() {
    FILE *file;
    char text[100];
    char ch;
    file = fopen("samir.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    printf("Enter text to append to test.txt: ");
    scanf(" %[^\n]", text);
    fprintf(file, "%s\n", text);
    fclose(file);
    file = fopen("samir.txt", "r");

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    printf("\nContents of samir.txt:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
    getch();
}

