#include <stdio.h>

union EmployeeData {
    int id;
    char name[50];
};

struct Employee {
    union EmployeeData data;
    int isName;
    int salary;
};

int main() {
    struct Employee employees[4];
    struct Employee highest, lowest;
    int totalSalary = 0;
    int i = 0;

    while (i < 4) {
        printf("Enter ID for employee %d: ", i + 1);
        scanf("%d", &employees[i].data.id);
        employees[i].isName = 0;

        printf("Enter name for employee %d: ", i + 1);
        scanf("%s", employees[i].data.name);
        employees[i].isName = 1;

        printf("Enter salary for employee %d: ", i + 1);
        scanf("%d", &employees[i].salary);
        totalSalary += employees[i].salary;
        i++;
    }

    highest = lowest = employees[0];
    i = 1;

    while (i < 4) {
        if (employees[i].salary > highest.salary) {
            highest = employees[i];
        }
        if (employees[i].salary < lowest.salary) {
            lowest = employees[i];
        }
        i++;
    }

    double averageSalary = (double)totalSalary / 4;

    printf("\nEmployee with the highest salary:\nID: %d\nName: %s\nSalary: %d\n", highest.data.id, highest.data.name, highest.salary);
    printf("\nEmployee with the lowest salary:\nID: %d\nName: %s\nSalary: %d\n", lowest.data.id, lowest.data.name, lowest.salary);
    printf("\nAverage salary: %.2f\n", averageSalary);

    return 0;
}