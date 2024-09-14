/*
WAP to display a pattern
   *******
    *****
     ***
      *
*/
#include <stdio.h>
#include <conio.h>

void display_pattern();
void main() {
    display_pattern();
    getch();
}
void display_pattern() {
    int i, j, k;
    int n = 4;
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        for (k = 0; k < (2 * (n - i) - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
}

