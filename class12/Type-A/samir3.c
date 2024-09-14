//WAP to enter a number & find its cube root

#include<stdio.h>
#include<conio.h>
#include<math.h>

float crt(float n);
void main() {
	float n, root;
	printf("Enter a number: ");
	scanf("%f", &n);
	root = crt(n);
	printf("\nCube root = %.2f", root);
	getch();
}
float crt(float n) {
	float y;
	y = cbrt(n);
	return y;
}

