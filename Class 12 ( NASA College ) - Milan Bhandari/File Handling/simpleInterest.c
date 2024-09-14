#include <stdio.h>

int main() {
    char name[50];
    int principal, rate, time;
    float simpleInterest;

    printf("Enter name of the loan taker: ");
    scanf("%s", name);

    printf("Enter principal amount: ");
    scanf("%d", &principal);

    printf("Enter rate of interest: ");
    scanf("%d", &rate);

    printf("Enter time period (in years): ");
    scanf("%d", &time);

    simpleInterest = (principal * rate * time) / 100.0;

    FILE *file = fopen("loanTaker.json", "a+");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fseek(file, 0, SEEK_END);
    if (ftell(file) != 0) {
        fprintf(file, ",\n");
    }
    fprintf(file, "{\n");
    fprintf(file, "  \"name\": \"%s\",\n", name);
    fprintf(file, "  \"principal\": %d,\n", principal);
    fprintf(file, "  \"rate\": %d,\n", rate);
    fprintf(file, "  \"time\": %d,\n", time);
    fprintf(file, "  \"simpleInterest\": %.2f\n", simpleInterest);
    fprintf(file, "}\n");

    fclose(file);

    printf("\nLoan taker: %s\n", name);
    printf("Principal amount: %d\n", principal);
    printf("Rate of interest: %d%%\n", rate);
    printf("Time period: %d years\n", time);
    printf("Simple Interest: %.2f\n", simpleInterest);

    return 0;
}