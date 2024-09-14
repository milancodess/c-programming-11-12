#include <stdio.h>
int main () {
    int x, y, sum;
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
