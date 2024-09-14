/*
WAP to print the series 1 5 9 ... up to nth term
*/
#include <stdio.h>
#include <conio.h>

int series();

void main() {
    int n;
    printf("Enter the number of terms: ");
    n = series();
    getch();
}

int series() {
    int n, term = 1;
    scanf("%d", &n);
    printf("The series is: ");
    for(int i = 1; i <= n; i++) {
        printf("%d ", term);
        term += 4;
    }
    return n;
}

