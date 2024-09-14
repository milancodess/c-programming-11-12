// WAP to display n integers in descending order
#include <stdio.h>
#include <conio.h>

void descending();
void main() {
    descending();
    getch();
}
void descending() {
    int i, j, t, a[200], n;
    printf("How many numbers to enter? : ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i] < a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("Descending order:\n");
    for(i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
}

