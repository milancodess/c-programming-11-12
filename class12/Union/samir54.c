/*
WAP to calculate the Simple Interest (SI) for a creditor based on their
ID, name, principal amount, interest rate, and time period.
*/
#include <stdio.h>
#include <conio.h>

struct Creditor {
    int id;
    char name[50];
    float principal, rate, time, interest;
}cr;

void main() {
    printf("Enter Creditor ID: ");
    scanf("%d", &cr.id);
    printf("Enter Creditor Name: ");
    scanf("%s", cr.name);
    printf("Enter Principal Amount: ");
    scanf("%f", &cr.principal);
    printf("Enter Interest Rate: ");
    scanf("%f", &cr.rate);
    printf("Enter Time Period (in years): ");
    scanf("%f", &cr.time);

    cr.interest = (cr.principal * cr.rate * cr.time) / 100;

    printf("\nCreditor Details:\n");
    printf("ID: %d\n", cr.id);
    printf("Name: %s\n", cr.name);
    printf("Principal Amount: %.2f\n", cr.principal);
    printf("Interest Rate: %.2f%%\n", cr.rate);
    printf("Time Period: %.2f years\n", cr.time);
    printf("Simple Interest: %.2f\n", cr.interest);

    getch();
}

