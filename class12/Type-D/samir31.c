/*
WAP to find the sum of two numbers 
*/
#include<stdio.h>
#include<conio.h>

void sum();

void main() {
    sum();
    getch();
}

void sum() {
    float a, b, c;
    printf("Enter 2 numbers: ");
    scanf("%f%f", &a, &b);
    c = a + b;
    printf("Sum of the two numbers = %.2f\n", c);
}

