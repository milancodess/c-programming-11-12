/*
WAP to find the sum of two numbers
*/
#include <stdio.h>
#include <conio.h>

void sum(float a, float b);

void main() {
    float x, y;
    printf("Enter 2 numbers: ");
    scanf("%f%f", &x, &y);
    sum(x, y);
    getch();
}

void sum(float a, float b) {
    float calc;
    calc = a + b;
    printf("Sum of 2 numbers: %.2f", calc);
}

