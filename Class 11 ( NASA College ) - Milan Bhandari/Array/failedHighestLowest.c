#include <stdio.h>
int main () {
    int i,fail,highest,lowest;
    int n[10];

    i = 0;
    while ( i < 10) {
        printf("Enter marks: ");
        scanf("%d", &n[i]);
        i++;
    }

    i = 0;
    fail = 0;
    while ( i < 10 ) {
        if ( n[i] < 35 ) {
            fail++;
        }
        i++;
    }
    printf("Total failed: %d\n", fail);

    highest = n[0];
    i = 0;
    while ( i < 10 ) {
        if ( n[i] > highest ) {
            highest = n[i];
        }
        i++;
    }
    printf("Highest: %d\n", highest);

    lowest = n[0];
    i = 0;
    while ( i < 10 ) {
        if ( n[i] < lowest ) {
            lowest = n[i];
        }
        i++;
    }
    printf("Lowest: %d\n", lowest);

    return 0;
}
