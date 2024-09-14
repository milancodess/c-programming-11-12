/* This Programs Finds The Code From 2 to Entered Number */
#include <stdio.h>

int main() {
    int num, a = 2;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (a <= num) {
        printf("%d\n", a);
        a += 2;
    }

    return 0;
}
