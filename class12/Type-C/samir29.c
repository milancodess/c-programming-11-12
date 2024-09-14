/*
WAP that converts a temperature from degrees Celsius to Fahrenheit
*/
#include <stdio.h>
#include <conio.h>

float temperature();

void main() {
    float fahrenheit;
    printf("Enter the temperature in Celsius: ");
    fahrenheit = temperature();
    printf("The temperature in Fahrenheit is: %.2f\n", fahrenheit);
    getch();
}

float temperature() {
    float celsius, fahrenheit;
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    return fahrenheit;
}


