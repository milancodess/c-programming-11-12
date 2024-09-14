/*
WAP to display the multiplication table of x up to its nth term using recursion
*/
#include <stdio.h>
#include <conio.h>

void table(int x, int n);

void main() {
    int x, n;

    printf("Enter the number for the multiplication table: ");
    scanf("%d", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Multiplication Table of %d up to %d terms:\n", x, n);
    table(x, n);
    getch();
}

void table(int x, int n) {
    if (n > 0) {
        table(x, n - 1);
        printf("%d x %d = %d\n", x, n, x * n);
    }
}

