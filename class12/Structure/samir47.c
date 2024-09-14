/* wap to enter detail of n students like fname, lname, section,
marks of eng/acc/eco and then after data entry display them */
#include <stdio.h>
#include <conio.h>

struct Student {
    char fname[50];
    char lname[50];
    char section[10];
    float m1, m2, m3
};

void main() {
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct Student students[n];
    
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("First Name: ");
        scanf("%s", students[i].fname);
        printf("Last Name: ");
        scanf("%s", students[i].lname);
        printf("Section: ");
        scanf("%s", students[i].section);
        printf("Marks in English: ");
        scanf("%f", &students[i].m1);
        printf("Marks in Accounting: ");
        scanf("%f", &students[i].m2);
        printf("Marks in Economics: ");
        scanf("%f", &students[i].m3);
    }
    printf("\nDetails of %d students:\n", n);
    for (i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s %s\n", students[i].fname, students[i].lname);
        printf("Section: %s\n", students[i].section);
        printf("Marks in English: %.2f\n", students[i].m1);
        printf("Marks in Accounting: %.2f\n", students[i].m2);
        printf("Marks in Economics: %.2f\n", students[i].m3);
    }
    getch();
}

