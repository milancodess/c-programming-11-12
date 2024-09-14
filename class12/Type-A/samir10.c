/*
WAP to display prime number from 1 to n.
*/
#include<stdio.h>
#include<conio.h>

int prime(int n);
void main() {
	int i, a;
	printf("Enter the last term :");
	scanf("%d", &a);
	for(i=1; i<=a; i++) {
		if(prime(i)==2) {
			printf("%d\t", i);
		}
	}
	getch();
}
int prime(int n) {
	int i, c=0;
	for(i=1; i<=n; i++) {
		if(n%i==0) {
			c++;
		}
	}
	return c;
}

