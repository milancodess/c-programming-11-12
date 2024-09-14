/*
WAP to enter a number & check if it is divisible by 3 or 5 or both
*/
#include <stdio.h>
#include <conio.h>

int check(int n);

void main() {
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = check(a);
    if (b == 1)
        printf("Is divisible by only 3");
    else if (b == 2)
        printf("Is divisible by only 5");
    else if (b == 3)
        printf("Is divisible by both 3 & 5");
    else
        printf("Is not divisible by both 3 & 5");
    getch();
}

int check(int n) {
    if (n % 3 == 0 && n % 5 != 0)
        return 1;
    else if (n % 5 == 0 && n % 3 != 0)
        return 2;
    else if (n % 3 == 0 && n % 5 == 0)
        return 3;
    else
        return 0;
}

