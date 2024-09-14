//WAP to calculate speed and velocity of object
#include <stdio.h>
#include <conio.h>

float calculate_speed();
float calculate_velocity();

void main() {
    float speed, velocity;
    speed = calculate_speed();
    printf("Speed = %.2f m/s\n", speed);
    velocity = calculate_velocity();
    printf("Velocity = %.2f m/s\n", velocity);
    getch();
}
float calculate_speed() {
    float distance, time;
    printf("Enter distance (in meters) & time (in seconds): ");
    scanf("%f %f", &distance, &time);
    return distance / time;
}

float calculate_velocity() {
    float displacement, time;
    printf("Enter displacement (in meters) & time (in seconds): ");
    scanf("%f %f", &displacement, &time);
    return displacement / time;
}

