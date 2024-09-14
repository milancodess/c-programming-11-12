/*
Write a recursive C program for the factorial calculation of any number
*/
#include<stdio.h>
#include<conio.h>

long int factorial(int n);
void main() {
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	printf("\nFactorial is %ld", factorial(n));
	getch();
}
long int factorial(int n) {
	if(n<=1) {
		return (1);
	} else {
		return (n*factorial(n-1));
	}
}

