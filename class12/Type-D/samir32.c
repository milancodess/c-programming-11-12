/*
WAP to display prime numbers from 1 to n.
*/
#include<stdio.h>
#include<conio.h>

int prime();
void main() {
	prime();
	getch();
}

int prime() {
	int n, i, j, is_prime;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Prime numbers from 1 to %d are:\n", n);
    for (i = 2; i <= n; i++) {
        is_prime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

