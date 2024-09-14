/*
WAP to read and display the contents of a file named student.txt.
*/

#include <stdio.h>
#include <conio.h>

void main() {
    FILE *file;
    char ch;

    file = fopen("student.txt", "r");

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    printf("Contents of student.txt:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);

    getch();
}

