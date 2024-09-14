/*
WAP to read name, roll number, and marks of students from the file named "student.dat"
and display the records.
*/

#include <stdio.h>
#include <conio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void main() {
    FILE *file;
    struct Student student;
    file = fopen("students.dat", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    printf("Student Records:\n");
    printf("Name\tRoll No\tMarks\n");
    printf("-------------------------\n");
    while (fscanf(file, "%s %d %f", student.name, &student.roll_no, &student.marks) != EOF) {
        printf("%s\t%d\t%.2f\n", student.name, student.roll_no, student.marks);
    }
    fclose(file);
    getch();
}

