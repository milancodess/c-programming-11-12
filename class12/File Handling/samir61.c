/*
WAP to take student details (ID, Name, Roll No, Age, and Address) as input and write them into a file named student.txt.
*/

#include <stdio.h>
#include <conio.h>

void main() {
    FILE *file;
    int id, roll_no, age;
    char name[50], address[100];

    file = fopen("student.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    printf("Enter Student ID: ");
    scanf("%d", &id);
    printf("Enter Student Name: ");
    scanf("%s", name);
    printf("Enter Student Roll No: ");
    scanf("%d", &roll_no);
    printf("Enter Student Age: ");
    scanf("%d", &age);
    printf("Enter Student Address : ");
    scanf("%s", address);
    fprintf(file, "Student ID: %d\n", id);
    fprintf(file, "Name: %s\n", name);
    fprintf(file, "Roll No: %d\n", roll_no);
    fprintf(file, "Age: %d\n", age);
    fprintf(file, "Address: %s\n", address);
    fclose(file);
    printf("Student details have been written to student.txt\n");
    getch();
}


