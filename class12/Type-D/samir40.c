/*
WAP to display the multiplication table of x up to its nth term
*/
#include <stdio.h>
#include <conio.h>

void table();

void main() {
    table();
    getch();
}

void table() {
    int x, n, i;
    printf("Enter the number for the multiplication table: ");
    scanf("%d", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Multiplication Table of %d up to %d terms:\n", x, n);
    for (i = 1; i <= n; i++) {
        printf("%d x %d = %d\n", x, i, x * i);
    }
}

