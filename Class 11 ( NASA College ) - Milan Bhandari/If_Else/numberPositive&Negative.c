#include<stdio.h>

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if( n > 0 ) {
        printf("Number is positive.");
    } else {
        printf("Number is negative.");
    }

    return 0;
}
