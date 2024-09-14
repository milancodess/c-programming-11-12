#include <stdio.h>

int main() {
    int m1[3][3],m2[3][3],m3[3][3];
    int i,j;

    printf("Enter the data for m1:\n");
    j = 0;
    while ( j < 3 ) {
        i = 0;
        while ( i < 3 ) {
            printf("[%d][%d]: ", j,i);
            scanf("%d", &m1[i][j]);
            i++;

        }
        j++;
    }
    printf("\n\n");

    printf("Enter the data for m2:\n");
    j = 0;
    while ( j < 3 ) {
        i = 0;
        while ( i < 3 ) {
            printf("[%d][%d]: ", j,i);
            scanf("%d", &m2[i][j]);
            i++;
        }
        j++;
    }

    printf("Sum of m1 & m2: \n");
    j = 0;
    while ( j < 3 ) {
        i = 0;
        while ( i < 3 ) {
            m3[i][j]= m1[i][j] + m2[i][j];
            printf("%d \t", m3[i][j]);
            i++;
        }
        j++;
        printf("\n");
    }

    return 0;
}
