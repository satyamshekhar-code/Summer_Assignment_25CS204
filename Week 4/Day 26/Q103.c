#include <stdio.h>

int main() {
    int choice;
    float balance = 5000.0;
    float amount;

    while (1) {
        printf("\n1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is: Rs. %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Rs. %.2f deposited successfully.\n", amount);
                } else {
                    printf("Invalid amount.\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > balance) {
                    printf("Insufficient balance!\n");
                } else if (amount <= 0) {
                    printf("Invalid amount.\n");
                } else {
                    balance -= amount;
                    printf("Rs. %.2f withdrawn successfully.\n", amount);
                }
                break;

            case 4:
                printf("Thank you for using the ATM.\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}