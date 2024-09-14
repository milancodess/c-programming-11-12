/*
WAP to display the multiplication table of a given number x using pointers.
*/
#include <stdio.h>

void main() {
    int x, i;
    int *ptrX = &x;

    printf("Enter a number to display its multiplication table: ");
    scanf("%d", ptrX);

    printf("Multiplication table of %d:\n", *ptrX);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", *ptrX, i, (*ptrX) * i);
    }
    getch();
}



