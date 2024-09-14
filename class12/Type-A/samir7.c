/*
WAP to enter a number & check if it is palindrome or not ?
*/
#include<stdio.h>
#include<conio.h>

int palin(int n);
void main() {
	int a, b;
	printf("Enter a number: ");
	scanf("%d", &a);
	b = palin(a);
	if(b==a) {
		printf("Entered number is palindrome");
	} else {
		printf("Entered number is not palindrome");
	}
	getch();
}
int palin(int n) {
	int r, s=0;
	while(n!=0) {
		r = n%10;
		s = s*10+r;
		n = n/10;
	}
	return s;
}

