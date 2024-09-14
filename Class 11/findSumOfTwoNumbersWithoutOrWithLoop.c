#include <stdio.h>

int main () {
    /* Without Using Loop */
    int x, y, sum;
    printf("Enter number: ");
    scanf("%d", &x);
    printf("Enter number: ");
    scanf("%d", &y);

    sum = x + y;
    printf("Sum: %d\n\n", sum);
    
    /* Using While Loop */
    int n[2];
    int i = 0;
    sum = 0;
    while (i < 2) {
        printf("Enter number: ");
        scanf("%d", &n[i]);
        sum += n[i];
        i++;
    }
    printf("Sum: %d\n", sum);

    return 0;
}
