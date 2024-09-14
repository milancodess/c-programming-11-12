#include <stdio.h>
int main() {
    int i, greatest;
    int n[5];

    i = 0;
    while (i < 5 ) {
        printf("Enter number: ");
        scanf("%d", &n[i]);
        i++;
    }

    greatest = n[0];

    i = 0;
    while ( i < 5 ) {
        if ( n[i] > greatest) {
            greatest = n[i];
        }
        i++;
    }
    printf("%d is the greatest.", greatest);
    return 0;
}
