/*
WAP to enter a number & check if it is armstrong or not ?
*/
#include<stdio.h>
#include<conio.h>

int res(int n);
void main() {
	int a, b;
	printf("Enter a number: ");
	scanf("%d", &a);
	b = res(a);
	if(b==a) {
		printf("Entered number is armstrong");
	} else {
		printf("Entered number is not armstrong");
	}
	getch();
}
int res(int n) {
	int r, s=0;
	while(n!=0) {
		r = n%10;
		s = s+r*r*r;
		n = n/10;
	}
	return s;
}

