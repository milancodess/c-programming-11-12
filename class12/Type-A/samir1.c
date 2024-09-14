/*
WAP to enter a number and check it if it is divisible by 5
or not.
*/
#include<conio.h>
#include<conio.h>

int calc(int x);
void main() {
	int a, b;
	printf("Enter a number: ");
	scanf("%d", &a);
	b = calc(a);
	if(b==0){
		printf("It is divisible by 5");
	} else {
		printf("It can\'t be divisible by 5");
	}
	getch();
}
int calc(int x) {
	int res;
	res = x%5;
	return res;
}

