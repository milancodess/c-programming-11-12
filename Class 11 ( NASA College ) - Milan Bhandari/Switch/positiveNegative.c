#include <stdio.h>

int main() {
    int num;
    int choice = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    switch (choice) {
        case 1:
            switch (num > 0) {
                case 1:
                    printf("%d is positive.\n", num);
                    break;
                case 0:
                    switch (num < 0) {
                        case 1:
                            printf("%d is negative.\n", num);
                            break;
                        case 0:
                            printf("%d is zero.\n", num);
                            break;
                    }
                    break;
            }
            break;
    }

    return 0;
}
