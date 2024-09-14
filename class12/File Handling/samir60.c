/*
WAP to write user input text into a file called test.txt.
*/

#include <stdio.h>

void main() {
    FILE *file;
    char text[100];

    file = fopen("test.txt", "w");

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter the text you want to write to the file: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, file);
    fclose(file);
    printf("Text has been written successfully to test.txt\n");
    getch();
}

