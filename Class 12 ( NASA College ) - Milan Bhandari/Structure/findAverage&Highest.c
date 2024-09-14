#include <stdio.h>

int main() {
    struct Student {
        char name[50];
        int marks;
    };

    struct Student students[3];
    int i = 0;
    int totalMarks = 0;
    int averageMarks;
    int track = 0;

    printf("Enter details of 3 students:\n");
    while (i < 3) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter marks for %s: ", students[i].name);
        scanf("%d", &students[i].marks);

        totalMarks += students[i].marks;

        if (students[i].marks > students[track].marks) {
            track = i;
        }

        i++;
    }

    averageMarks = totalMarks / 3;

    printf("\nAverage marks: %d\n", averageMarks);
    printf("Student with highest marks: %s\n", students[track].name);

    return 0;
}