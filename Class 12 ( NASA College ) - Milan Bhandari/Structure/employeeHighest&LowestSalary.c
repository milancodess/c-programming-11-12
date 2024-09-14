#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    int salary;
};

int main() {
    struct Employee employees[4];
    struct Employee highest, lowest;
    int totalSalary = 0;
    int i = 0;

    while (i < 4) {
        printf("Enter ID for employee %d: ", i + 1);
        scanf("%d", &employees[i].id);
        printf("Enter name for employee %d: ", i + 1);
        scanf("%s", employees[i].name);
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%d", &employees[i].salary);
        printf("\n\n");
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

    printf("\nEmployee with the highest salary:\nID: %d\nName: %s\nSalary: %d\n\n", highest.id, highest.name, highest.salary);
    printf("\nEmployee with the lowest salary:\nID: %d\nName: %s\nSalary: %d\n\n", lowest.id, lowest.name, lowest.salary);
    printf("\nAverage salary: %.2f\n", averageSalary);

    return 0;
}