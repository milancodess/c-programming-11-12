/*
WAP to find the sum of 2 distances measured in feet and inch
*/
#include<stdio.h>
#include<conio.h>

void distance(int f1, int i1, int f2, int i2);
void main() {
	int a, b, c, d;
	printf("Enter 1st distance in feet & inch: ");
	scanf("%d%d", &a, &b);
	printf("Enter 2nd distance in feet & inch: ");
	scanf("%d%d", &c, &d);
	distance(a, b, c, d);
	getch();
}
void distance(int f1, int i1, int f2, int i2) {
	int f, i;
	f = f1+f2+(i1+i2)/12;
	i = (i1+i2)%12;
	printf("Sum of 2 distances = %d Feet\t%d Inch", f, i);
}

