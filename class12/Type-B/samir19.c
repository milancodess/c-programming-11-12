/*
WAP to find out all the possible factor of number
*/
#include<stdio.h>
#include<conio.h>

void find_factors(int num);
void main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    find_factors(number);
    getch();
}
void find_factors(int num) {
    printf("Factors of %d are: ", num);
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
}

