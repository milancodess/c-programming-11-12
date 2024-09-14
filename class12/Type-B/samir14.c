/*
WAP to enter a number and find the sum of digits
*/
#include<stdio.h>
#include<conio.h>

void sum(int n);
void main() {
	int a;
	printf("Enter a number: ");
	scanf("%d", &a);
	sum(a);
	getch();
}
void sum(int n) {
	int r, s=0;
	while(n!=0) {
		r = n%10;
		s = s+r;
		n = n/10;
	}
	printf("Sum of digit = %d", s);
}

