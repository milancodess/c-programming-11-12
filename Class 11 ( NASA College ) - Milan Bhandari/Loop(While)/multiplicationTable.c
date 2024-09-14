/* To Find The Table Of A Enter Number From 1 to 10 */

#include <stdio.h>
int main() {
    int n,i;

    printf("Enter number: ");
    scanf("%d", &n);

    i = 1;
    while ( i <= 10 ) {
        printf("%d × %d = %d\n", n,i, n*i);
        i++;
    }
    return 0;
}

/* To Find The Table Of A Enter Number From 1 to That Number*/
#include <stdio.h>
int main() {
    int n,i;

    printf("Enter number: ");
    scanf("%d", &n);

    i = 1;
    while ( i <= n ) {
        printf("%d × %d = %d\n", n,i, n*i);
        i++;
    }
    return 0;
}
