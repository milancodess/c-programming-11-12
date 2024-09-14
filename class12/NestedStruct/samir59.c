/*
WAP to print a string n times using pointers.
*/
#include <stdio.h>

void main() {
    char str[100];
    int n, i;
    char *ptr = str;

    printf("Enter a string: ");
    gets(ptr);

    printf("Enter the number of times to print the string: ");
    scanf("%d", &n);

    printf("\nPrinting the string %d times:\n", n);
    for (i = 0; i < n; i++) {
        printf("%s\n", ptr);
    }

    getch();
}


