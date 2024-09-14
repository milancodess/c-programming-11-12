#include <stdio.h>

int findSum(int a, int b);

int main() {
    int num1, num2, sum;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = findSum(num1, num2);

    printf("The sum of the numbers is: %d\n", sum);

    return 0;
}

int findSum(int a, int b) {
    return a + b;
}