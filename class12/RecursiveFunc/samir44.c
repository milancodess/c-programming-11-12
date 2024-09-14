#include <stdio.h>

int calculate(int length, int width);

void main() {
    int length, width;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    int area = calculate(length, width);
    printf("The area of the rectangle is: %d\n", area);
}

int calculate(int length, int width) {
    if (width <= 0) {
        return 0;
    } else {
        return (length + calculate(length, width - 1));
    }
}

