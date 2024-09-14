/*
WAP to write a user-defined message into a user-defined file.
*/

#include <stdio.h>
#include <conio.h>

void main() {
    FILE *file;
    char filename[100];
    char message[256];

    printf("Enter the filename (e.g.: file.txt): ");
    scanf("%s", filename);

    file = fopen(filename, "w");

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter something to write to the file: ");
    scanf(" %[^\n]s", message);
    fprintf(file, "%s\n", message);
    fclose(file);
    printf("Successfully written to %s\n", filename);
    getch();
}


