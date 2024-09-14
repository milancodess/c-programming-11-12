/*
WAP to append employee details (ID, Name, Age, Salary) to "employee.txt"
until the user decides to stop.
*/

#include <stdio.h>
#include <conio.h>

void main() {
    FILE *file;
    int id, age;
    float salary;
    char name[50], choice;
    file = fopen("employee.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
    }
    do {
        printf("Enter employee ID: ");
        scanf("%d", &id);
        printf("Enter employee name: ");
        scanf(" %s", name);
        printf("Enter employee age: ");
        scanf("%d", &age);
        printf("Enter employee salary: ");
        scanf("%f", &salary);
        fprintf(file, "Employee ID: %d\nName: %s\nAge: %d\nSalary: %.2f\n\n", id, name, age, salary);
        printf("Do you want to add another employee? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    fclose(file);
    printf("Data written successfully...\n");
    getch();
}


