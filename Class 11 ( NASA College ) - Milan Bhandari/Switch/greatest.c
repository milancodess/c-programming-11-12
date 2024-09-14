#include <stdio.h>

int main() {
    int num1, num2;
    int choice = 1;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (choice) {
        case 1:
            if (num1 > num2) {
                printf("The greatest number is: %d\n", num1);
            } else if (num2 > num1) {
                printf("The greatest number is: %d\n", num2);
            } else {
                printf("Both numbers are equal.\n");
            }
            break;
    }

    return 0;
}
