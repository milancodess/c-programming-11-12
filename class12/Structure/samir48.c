/*
WAP to read records of 3 employee i.e ID, name, age, salary and then display information
*/

#include <stdio.h>
#include <conio.h>

struct Employee {
    int id;
    char name[50];
    int age;
    long salary;
};

void main() {
    struct Employee Emp[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("\nEnter details for Employee %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &Emp[i].id);
        printf("Name: ");
        scanf("%s", Emp[i].name);
        printf("Age: ");
        scanf("%d", &Emp[i].age);
        printf("Salary: ");
        scanf("%ld", &Emp[i].salary);
    }

    printf("\nDetails Of Employee:\n");
    for (i = 0; i < 3; i++) {
        printf("\n%d\t%s\t%d\t%ld", Emp[i].id, Emp[i].name, Emp[i].age, Emp[i].salary);
    }

    getch();
}

