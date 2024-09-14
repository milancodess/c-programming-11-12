//WAP to display n integers in ascending order
#include <stdio.h>
#include <conio.h>

void ascending();
void main() {
    ascending();
    getch();
}
void ascending() {
    int i, j, t, a[200], n;
    printf("How many numbers to enter? : ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i] > a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("Ascending order:\n");
    for(i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
}

