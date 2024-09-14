/*
WAP to read and display all content of a user-defined file.
*/

#include <stdio.h>
#include <conio.h>

void main() {
    FILE *file;
    char filename[100];
    char ch;

    printf("Enter the file name to read: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("File content:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
    getch();
}

