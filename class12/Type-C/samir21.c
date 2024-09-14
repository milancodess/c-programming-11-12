/*
 WAP that calculates the factorial of a positive number 
 */
#include <stdio.h>
#include <conio.h>

int find_factorial();

void main() {
    int result;
    printf("Enter a positive number to find its factorial: ");
    result = find_factorial();
    printf("The factorial is: %d", result);
    getch();
}

int find_factorial() {
    int num, factorial = 1;
    scanf("%d", &num);
    for(int i = 1; i <= num; i++) {
        factorial *= i;
    }
    return factorial;
}

