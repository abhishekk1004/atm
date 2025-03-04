#include <stdio.h>





int main() {
    float balance = 1000.00; // Initial balance
    int pin, choice;
    int authenticated = 0;
    const int MAX_ATTEMPTS = 3;

    printf("Welcome to the ATM Simulation!\n");

    // PIN Setup (for simplicity, we'll set it once here; in a real system, this would persist)
    printf("Set up your 4-digit PIN: ");
    scanf("%d", &pin);
    printf("PIN set successfully!\n");

    // Authentication
    authenticated = authenticate(pin, MAX_ATTEMPTS);
    if (!authenticated) {
        printf("Program terminated.\n");
        return 1; // Exit with error
    }

    // Main ATM Menu
    do {
        printf("\n=== ATM Menu ===\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance = deposit(balance);
                break;
            case 3:
                balance = withdraw(balance);
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}