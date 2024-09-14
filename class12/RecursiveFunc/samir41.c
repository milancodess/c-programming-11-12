/*
WAP to find the sum of 'n' natural numbers [cumulative sum]
*/
#include<stdio.h>
#include<conio.h>

int sum(int n);
int main() {
	int n, f;
	printf("Enter last number: ");
	scanf("%d", &n);
	f = sum(n);
	printf("\nThe Cumulative sum from 1 to %d is : %d", n, f);
	getch();
}
int sum(int n) {
	if(n<=0) {
		return 0;
	} else {
		return (n+sum(n-1));
	}
}

