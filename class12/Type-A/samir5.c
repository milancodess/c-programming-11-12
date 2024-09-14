/*
WAP to enter a number and find its reverse
*/

#include<stdio.h>
#include<conio.h>

int reverse(int n);
void main() {
	int a, b;
	printf("Enter a number: ");
	scanf("%d", &a);
	b = reverse(a);
	printf("Reverse of entered number = %d", b);
	getch();
}
int reverse(int n) {
	int r, s=0;
	while(n!=0) {
		r = n%10;
		s = s*10+r;
		n = n/10;
	}
	return s;
}

