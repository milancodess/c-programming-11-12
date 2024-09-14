/*
WAP to read employees id, name and salary
*/
#include <stdio.h>
#include <conio.h>

union Employee {
    int id;
    char name[50];
    float salary;
}emp;

void main() {
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Employee Name: ");
    scanf("%s", emp.name);
    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);
    printf("Employee ID: %d\n", emp.id);
    printf("Employee Name: %s\n", emp.name);
    printf("Employee Salary: %.2f\n", emp.salary);
    getch();
}

