/*
WAP to calculate total marks, percentage, and grade of a student in 5 subjects
*/
#include <stdio.h>
#include <conio.h>

void calculate_results();
void main() {
    calculate_results();
    getch();
}
void calculate_results() {
    float marks[5], total = 0, percentage;
    int i;
    char grade;
    printf("Enter marks for 5 subjects:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }
    percentage = (total / 500) * 100;
    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);
}

