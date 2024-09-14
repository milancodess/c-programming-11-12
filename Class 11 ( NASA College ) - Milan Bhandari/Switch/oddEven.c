#include <stdio.h>

int main() {
    int num;
    int choice = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    switch (choice) {
        case 1:
            switch (num % 2) {
                case 0:
                    printf("%d is even.\n", num);
                    break;
                case 1:
                    printf("%d is odd.\n", num);
                    break;
            }
            break;
    }

    return 0;
}
