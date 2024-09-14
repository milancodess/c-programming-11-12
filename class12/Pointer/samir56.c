/*
WAP to find the largest number in an array using pointers.
*/
#include <stdio.h>

void main() {
    int arr[5], i, max;
    int *ptr;

    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr;
    max = *ptr;

    for (i = 1; i < 5; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }

    printf("The largest number is: %d\n", max);
    getch();
}

