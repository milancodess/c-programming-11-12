/*
WAP to add and multiply two numbers using recursive functions
*/
#include <stdio.h>
#include <conio.h>

int add(int a, int b);
int multiply(int a, int b);

void main() {
    int a, b, sum, prod;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
	sum = add(a, b);
    prod = multiply(a, b);
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", prod);
    getch();
}
int add(int a, int b) {
    if (b == 0)
        return a;
    return add(a + 1, b - 1);
}

int multiply(int a, int b) {
    if (b == 0)
        return 0;
    return a + multiply(a, b - 1);
}

