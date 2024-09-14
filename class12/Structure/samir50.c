/*
WAP to enter Name, Class, age, and marks in Account, Economics, english, nepali, math & computer
and display student all these data and total marks, average marks and total percentage
*/
#include <stdio.h>
#include <conio.h>

struct Student {
    char name[50];
    int class, age;
    float account, economics, english, nepali, math, computer;
};

void main() {
    struct Student s;
    float total, average, percentage;
    
    printf("Enter the student's name: ");
    scanf("%s", s.name);
    printf("Enter the student's class: ");
    scanf("%d", &s.class);
    printf("Enter the student's age: ");
    scanf("%d", &s.age);

    printf("Enter marks in Account: ");
    scanf("%f", &s.account);
    printf("Enter marks in Economics: ");
    scanf("%f", &s.economics);
    printf("Enter marks in English: ");
    scanf("%f", &s.english);
    printf("Enter marks in Nepali: ");
    scanf("%f", &s.nepali);
    printf("Enter marks in Math: ");
    scanf("%f", &s.math);
    printf("Enter marks in Computer: ");
    scanf("%f", &s.computer);

    total = s.account + s.economics + s.english + s.nepali + s.math + s.computer;
    average = total / 6;
    percentage = (total / 600) * 100;
    
    printf("\nStudent Name: %s\n", s.name);
    printf("Class: %d\n", s.class);
    printf("Age: %d\n", s.age);
    printf("Marks in Account: %.2f\n", s.account);
    printf("Marks in Economics: %.2f\n", s.economics);
    printf("Marks in English: %.2f\n", s.english);
    printf("Marks in Nepali: %.2f\n", s.nepali);
    printf("Marks in Math: %.2f\n", s.math);
    printf("Marks in Computer: %.2f\n", s.computer);
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);

    getch();
}


