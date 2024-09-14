/*
  Pattern Type:
  Enter number: 4
1       2       3       4
1       2       3       4
1       2       3       4
1       2       3       4
*/

#include <stdio.h>
int main() {
    int n,i,j;

    printf("Enter number: ");
    scanf("%d", &n);

    j = 1;
    while ( j <= n ) {
        i = 1;
        while ( i <= n ) {
            printf("%d", i);
            i++;
            printf("\t");
        }
        j++;
        printf("\n");
    }


    return 0;
}

/* Pattern Type:
   Enter number: 5
1       1       1       1       1
2       2       2       2       2
3       3       3       3       3
4       4       4       4       4
5       5       5       5       5
 */

#include <stdio.h>
int main() {
    int n,i,j;

    printf("Enter number: ");
    scanf("%d", &n);

    j = 1;
    while ( j <= n ) {
        i = 1;
        while ( i <= n ) {
            printf("%d", j);
            i++;
            printf("\t");
        }
        j++;
        printf("\n");
    }


    return 0;
}

/*  Pattern Type:
    Enter number: 5
1
2       2
3       3       3
4       4       4       4
5       5       5       5       5
 */

#include <stdio.h>
int main() {
    int n,i,j;

    printf("Enter number: ");
    scanf("%d", &n);

    j = 1;
    while ( j <= n ) {
        i = 1;
        while ( i <= j ) {
            printf("%d", j);
            i++;
            printf("\t");
        }
        j++;
        printf("\n");
    }


    return 0;
}

/* Pattern Type:
   Enter number: 5
1
1       2
1       2       3
1       2       3       4
1       2       3       4       5
  */

#include <stdio.h>
int main() {
    int n,i,j;

    printf("Enter number: ");
    scanf("%d", &n);

    j = 1;
    while ( j <= n ) {
        i = 1;
        while ( i <= j ) {
            printf("%d", i);
            i++;
            printf("\t");
        }
        j++;
        printf("\n");
    }


    return 0;
}

/* Pattern Type:
   Enter number: 5
1       2       3       4       5
1       2       3       4
1       2       3
1       2
1
  */

#include <stdio.h>
int main() {
    int n, i, j;

    printf("Enter number: ");
    scanf("%d", &n);

    j = n;
    while (j >= 1) {
        i = 1;
        while (i <= j) {
            printf("%d\t", i);
            i++;
        }
        j--;
        printf("\n");
    }

    return 0;
}
