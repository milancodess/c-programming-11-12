/*
WAP to enter a number & find the sum of its digits.
*/
#include<stdio.h>
#include<conio.h>

int sum(int n);
void main() {
	int a, b;
	printf("Enter a number: ");
	scanf("%d", &a);
	b = sum(a);
	printf("Sum of digit = %d", b);
	getch();
}
int sum(int n) {
	int r, s=0;
	while(n!=0) {
		r = n%10;
		s = s+r;
		n = n/10;
	}
	return s;
}

