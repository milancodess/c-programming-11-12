/*
WAP to display Fibonacci series	1 1 2 3 5 ... up to nth terms.
*/
#include<stdio.h>
#include<conio.h>

void fib(int x);
void main() {
	int n;
	printf("Enter the nth term: ");
	scanf("%d", &n);
	fib(n);
	getch();
}
void fib(int x) {
	int i, a=0, b=1, c=1;
	printf("Fibonacci series:");
	for(i=1; i<=x; i++) {
		printf("%5d", c);
		c = a+b;
		a = b;
		b = c;
	}
}

