/*
WAP to read employee details from test.txt and display those with a salary greater than 70,000.
*/
#include <stdio.h>
#include <conio.h>
void main() {
    FILE *file;
    int employeeID, age;
    float salary;
    char name[50], address[100];
    char line[100];
    file = fopen("test.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
    }
    printf("Employees with salary greater than 70,000:\n");
    while (fgets(line, sizeof(line), file)) {
        if (sscanf(line, "Employee ID: %d", &employeeID) == 1) {
            fgets(line, sizeof(line), file);
            sscanf(line, "Name: %s", name);
            fgets(line, sizeof(line), file);
            sscanf(line, "Age: %d", &age);
            fgets(line, sizeof(line), file);
            sscanf(line, "Salary: %f", &salary);
            fgets(line, sizeof(line), file);
            sscanf(line, "Address: %s", address);
            fgets(line, sizeof(line), file);
            if (salary > 70000) {
                printf("\nEmployee ID: %d\n", employeeID);
                printf("Name: %s\n", name);
                printf("Age: %d\n", age);
                printf("Salary: %.2f\n", salary);
                printf("Address: %s\n", address);
                printf("-----------------------------------\n");
            }
        }
    }
    fclose(file);
    getch();
}


