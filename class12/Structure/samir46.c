/*
WAP to read distance & display it in appropriate format
*/
#include<stdio.h>
#include<conio.h>

struct distance{
	int feet;
	float inches;
};

void main() {
	struct distance d1;
	printf("Enter distance in feet & inch: ");
	scanf("%d%f", &d1.feet, &d1.inches);
	
	while (d1.inches >= 12) {
		d1.inches -= 12;
		d1.feet += 1;
	}
	printf("\nDistance\n");
	printf("%d\t - \t%.2f\n", d1.feet, d1.inches);
	getch();
}

