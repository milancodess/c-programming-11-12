/*
WAP to display a pattern:
#
#   #
#   #   #
#   #   #   #
#   #   #   #   #
*/
#include <stdio.h>
#include <conio.h>

void display_pattern();
void main() {
    display_pattern();
    getch();
}
void display_pattern() {
    int i, j;
    int n = 5;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("#\t");
        }
        printf("\n");
    }
}

