/*
WAP to store details of n employees (name, age, salary, and address).
*/
#include <stdio.h>
#include <conio.h>
void main() {
    FILE *file;
    int n, i;
    char name[20], address[20];
    int age;
    float salary;
    file = fopen("employees.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
    }
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d\n", i + 1);
        printf("Name: ");
        scanf("%s", name);
        printf("Age: ");
        scanf("%d", &age);
        printf("Salary: ");
        scanf("%f", &salary);
        printf("Address: ");
        scanf("%s", address);
        fprintf(file, "Employee %d:\n", i + 1);
        fprintf(file, "Name: %s\n", name);
        fprintf(file, "Age: %d\n", age);
        fprintf(file, "Salary: %.2f\n", salary);
        fprintf(file, "Address: %s\n\n", address);
    }
    fclose(file);
    printf("\nEmployee details have been written to employees.txt\n");
    getch();
}

