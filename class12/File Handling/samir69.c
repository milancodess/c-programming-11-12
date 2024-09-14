/*
WAP to append student details (name, class, roll no, address, email) to a user-defined file
and display its entire content.
*/
#include <stdio.h>
#include <conio.h>
void main() {
    FILE *file;
    char filename[100], name[50], address[100], email[50];
    int roll_no, class;
    char ch;
    printf("Enter the file name to append (e.g., student.txt): ");
    scanf("%s", filename);
    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening file!\n");
    }
    printf("Enter student name: ");
    scanf(" %s", name);
    printf("Enter class: ");
    scanf("%d", &class);
    printf("Enter roll number: ");
    scanf("%d", &roll_no);
    printf("Enter address: ");
    scanf(" %[^\n]", address);
    printf("Enter email: ");
    scanf("%s", email);
    fprintf(file, "Name: %s\nClass: %d\nRoll No: %d\nAddress: %s\nEmail: %s\n\n", name, class, roll_no, address, email);
    fclose(file);
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file!\n");
    }
    printf("\nContents of %s:\n", filename);
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
    getch();
}


