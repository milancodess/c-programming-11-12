/* 
WAP to find the simple interest 
*/
#include<stdio.h>
#include<conio.h>

void interest(float p, float t, float r);

void main() {
    float a, b, c;
    printf("Enter Principle, Time and Rate: ");
    scanf("%f%f%f", &a, &b, &c);
    interest(a, b, c);
    getch();
}

void interest(float p, float t, float r) {
    float SI;
    SI = (p * t * r) / 100;
    printf("Simple Interest = %.2f", SI);
}
