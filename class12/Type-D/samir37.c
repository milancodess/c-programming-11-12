/*
WAP to display a pattern:
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5
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
    for (i = n; i >= 1; i--) {
        for (j = n; j >= n - i + 1; j--) {
            printf("%d\t", j);
        }
        printf("\n");
    }
}

