/*
WAP to append student details (ID, Name, Marks in ACC/ECO/MATH) to "data.txt"
using a structure and calculate the total and average marks.
*/

#include <stdio.h>
#include <conio.h>
struct Student {
    int id;
    char name[50];
    int marks1, marks2, marks3;
};
void main() {
    FILE *file;
    struct Student student;
    int total;
    float average;
    char choice;
    file = fopen("data.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
    }
    do {
        printf("Enter student ID: ");
        scanf("%d", &student.id);
        printf("Enter student name: ");
        scanf(" %[^\n]", student.name);
        printf("Enter marks in Account: ");
        scanf("%d", &student.marks1);
        printf("Enter marks in Economics: ");
        scanf("%d", &student.marks2);
        printf("Enter marks in Math: ");
        scanf("%d", &student.marks3);
        total = student.marks1 + student.marks2 + student.marks3;
        average = total / 3.0;
        fprintf(file, "Student ID: %d\nName: %s\nMarks1: %d\nMarks2: %d\nMarks3: %d\nTotal: %d\nAverage: %.2f\n\n", 
		student.id, student.name, student.marks1, student.marks2, student.marks3, total, average);
        printf("Do you want to add another student? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    fclose(file);
    printf("Data written successfully...\n");
    getch();
}

