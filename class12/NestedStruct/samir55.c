/*
WAP to swap two numbers using pointers.
*/
#include <stdio.h>

void main() {
    int a, b, temp;
    int *ptr1, *ptr2;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    ptr1 = &a;
    ptr2 = &b;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);
    getch();
}

