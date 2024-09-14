/*
WAP to read name, roll no and marks in 3 subjects and display average marks of subjects
*/
#include <stdio.h>
#include <conio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks[3];
    float total;
    float average;
};

void main() {
    struct Student student;
    int i;

    printf("Enter student's name: ");
    scanf("%s", student.name);
    printf("Enter roll number: ");
    scanf("%d", &student.roll_no);
    
    for (i = 0; i < 3; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &student.marks[i]);
        student.total += student.marks[i];
    }
    student.average = student.total / 3;
    printf("\nStudent Details:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.roll_no);
    printf("Total Marks: %.2f\n", student.total);
    printf("Average Marks: %.2f\n", student.average);

    getch();
}

