#include <stdio.h>

int main() {
    int amount;

    printf("Enter amount: ");
    scanf("%d", &amount);

    if ( amount < 1000 ) {
        printf("No discount");
    } else if ( amount >= 1000 || amount < 5000 ) {
        printf("Discount: %d", amount/100*5);
    } else if ( amount >= 5000 ) {
        printf("Discount: %d", amount/100*10);
    }
    return 0;
}
