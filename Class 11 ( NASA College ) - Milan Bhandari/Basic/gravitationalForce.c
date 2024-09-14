#include <stdio.h>

int main() {
    int m1, m2, r, g, fg;

    printf("Enter mass 1: ");
    scanf("%d", &m1);

    printf("Enter mass 2: ");
    scanf("%d", &m2);

    printf("Enter radius: ");
    scanf("%d", &r);

    g = 1; // assumption only
    fg = g * (m1 * m2) / (r * r);

    printf("Gravitational Force: %d\n", fg);

    return 0;
}
