#include <stdio.h>

int findArea(int length, int width);

int main() {
    int length, width, area;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    area = findArea(length, width);

    printf("The area of the rectangle is: %d\n", area);

    return 0;
}

int findArea(int length, int width) {
    int area;
    area =  length * width;
    return area;
}