#include <stdio.h>
int main() {
    int a, month, days;
    printf("Enter the number of days: ");
    scanf("%d", &a);
    month = a/30 + 1;
    days = a%30;
    printf("Months: %d\nDays: %d", month, days);
    return 0;
}
