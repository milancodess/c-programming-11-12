/*
WAP to convert seconds into hours minutes and seconds
*/
#include <stdio.h>
#include <conio.h>

void convert();

void main() {
    printf("Enter the total number of seconds: ");
    convert();
    getch();
}

void convert() {
    int total_seconds, hours, minutes, seconds;
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;
    total_seconds = total_seconds % 3600;
    minutes = total_seconds / 60;
    seconds = total_seconds % 60;

    printf("Hours: %d, Minutes: %d, Seconds: %d\n", hours, minutes, seconds);
}


