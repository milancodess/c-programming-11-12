#include <stdio.h>

void findArea(int *length, int *width, int *area);

int main() {
    int length, width, area;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    findArea(&length, &width, &area);

    printf("The area of the rectangle is: %d\n", area);

    return 0;
}

void findArea(int *length, int *width, int *area) {
    *area = (*length) * (*width);
}