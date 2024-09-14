/*
WAP toenter a number and check if it is even or odd
*/
#include<conio.h>
#include<conio.h>

int check(int n);
void main() {
	int a, b;
	printf("Enter a number: ");
	scanf("%d", &a);
	b = check(a);
	if(b==0){
		printf("Even");
	} else {
		printf("Odd");
	}
	getch();
}
int check(int n) {
	int res;
	res = n%2;
	return res;
}

