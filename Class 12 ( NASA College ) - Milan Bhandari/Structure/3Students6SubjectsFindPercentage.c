#include <stdio.h>

int main() {
    struct Students {
        char name[100];
        int mark[6];
    };

    struct Students s[3];

    int i, j;

    i = 0;
    while (i < 3) {
        printf("Enter name: ");
        scanf(" %[^\n]", s[i].name);
        getchar();

        j = 0;
        while (j < 6) {
            printf("Enter marks for subject %d: ", j + 1);
            scanf("%d", &s[i].mark[j]);
            j++;
        }
        printf("\n");
        i++;
    }

    i = 0;
    float percentage;
    int total;

    while (i < 3) {
        printf("Name: %s\t", s[i].name);
        j = 0;
        total = 0;
        while (j < 6) {
            total += s[i].mark[j];
            j++;
        }
        percentage = total / 6.0;
        printf("Percentage: %.2f%%\n", percentage);
        i++;
    }

    return 0;
}