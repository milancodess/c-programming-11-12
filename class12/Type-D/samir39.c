/*
WAP to enter & display the transpose of a 2x2 matrix
*/
#include <stdio.h>
#include <conio.h>

void transpose_matrix();
void main() {
    transpose_matrix();
    getch();
}
void transpose_matrix() {
    int matrix[2][2], transpose[2][2];
    int i, j;
    printf("Enter elements of the 2x2 matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("\nTranspose Matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
}
