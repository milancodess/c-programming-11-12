/*To Find The Sum Of Given Number Till That Number Like,
If We Enter 3 It Will Add 1+2+3= 6 and So on.*/
#include <stdio.h>
int main () {
    int n, i, sum;
    printf("Enter any number: ");
    scanf("%d", &n);

    sum = 0, i = 0;
    while ( i <= n) {
        sum = sum + i;
        i++;
    }
    printf("%d", sum);
    return 0;
}
