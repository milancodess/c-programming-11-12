/*
WAP to enter a number & find its factorial
*/
#include<stdio.h>
#include<conio.h>

int fact(int a);
void main() {
	int n;
	long int f;
	printf("Enter a number :");
	scanf("%d", &n);
	f = fact(n);
	printf("Factorial = %d", f);
	getch();
}
int fact(int a) {
	long int i, calc=1;
	for(i=1; i<=a; i++) {
		calc = calc*i;
	}
	return calc;
}

