/*
WAP to check whether number is odd or even using function
*/
#include<stdio.h>
#include<conio.h>

void check(int a);
void main() {
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	check(n);
	getch();
}

void check(int a) {
	if(a%2==0) {
		printf("%d is even number", a);
	} else {
		printf("%d is odd number", a);
	}
}

