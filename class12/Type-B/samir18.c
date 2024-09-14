/*
WAP to print multiplication table of 'n' number
*/
#include<stdio.h>
#include<conio.h>

void table(int x);
void main() {
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	table(n);
	getch();
}
void table(int x) {
	int j;
	for(j=1; j<=10; j++) {
		printf("\n%d*%d = %d", x, j, x*j);
	}
}

