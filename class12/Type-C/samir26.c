/*
WAP to find the volume of cylinder
*/
#include <stdio.h>
#include <conio.h>
#define PI 3.14159

float calculate_volume();

void main() {
    float volume;
    volume = calculate_volume();
    printf("The volume of the cylinder is: %.2f cubic metre\n", volume);
    getch();
}

float calculate_volume() {
    float radius, height, volume;
    printf("Enter the radius & height of the cylinder (in metre): ");
    scanf("%f%f", &radius, &height);
    volume = PI * radius * radius * height;
    return volume;
}

