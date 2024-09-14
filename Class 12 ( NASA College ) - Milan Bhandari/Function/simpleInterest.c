#include <stdio.h>

int simpleInterest(int p, int r, int t) {
    int si = (p * r * t) / 100;
    return si;
}

int main() {
    int p, r, t, si;

    printf("Enter the principal amount: ");
    scanf("%d", &p);

    printf("Enter the rate of interest: ");
    scanf("%d", &r);

    printf("Enter the time period in years: ");
    scanf("%d", &t);

    si = simpleInterest(p, r, t);

    printf("The simple interest is: %d\n", si);

    return 0;
}