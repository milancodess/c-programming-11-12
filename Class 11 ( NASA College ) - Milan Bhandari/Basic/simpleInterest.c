#include<stdio.h>

int main()
{
    float principal, rate, time, simpleInterest;

    printf("Enter the principle amount: ");
    scanf("%f", & principal);

    printf("Enter the rate: ");
    scanf("%f", &rate);

    printf("Enter the time: ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time)/100;

    printf("Simple Interest= %.2f", simpleInterest);

    return 0;
}
