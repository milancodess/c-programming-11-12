/*
WAP to find the remainder one number is divided by the another
*/
#include<stdio.h>
#include<conio.h>

void rem(int x, int y);
void main() {
	int a, b;
	printf("Enter 2 numbers: ");
	scanf("%d%d", &a, &b);
	rem(a, b);
	getch();
}
void rem(int x, int y) {
	int z;
	z = x%y;
	printf("The resulting remainder is %d", z);
}

