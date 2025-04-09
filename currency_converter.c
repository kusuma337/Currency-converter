#include <stdio.h>

void convertCurrency(float amount, int choice) {
    float convertedAmount;
    switch (choice) {
        case 1:
            convertedAmount = amount * 74.5; // USD to INR
            printf("Amount in INR: %.2f\n", convertedAmount);
            break;
        case 2:
            convertedAmount = amount * 0.85; // USD to EUR
            printf("Amount in EUR: %.2f\n", convertedAmount);
            break;
        case 3:
            convertedAmount = amount * 0.75; // USD to GBP
            printf("Amount in GBP: %.2f\n", convertedAmount);
            break;
        case 4:
            convertedAmount = amount * 1.2; // INR to USD
            printf("Amount in USD: %.2f\n", convertedAmount);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
}

int main() {
    int choice;
    float amount;
    
    printf("Currency Converter\n");
    printf("1. USD to INR\n");
    printf("2. USD to EUR\n");
    printf("3. USD to GBP\n");
    printf("4. INR to USD\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter amount to convert: ");
    scanf("%f", &amount);

    convertCurrency(amount, choice);

    return 0;
}
