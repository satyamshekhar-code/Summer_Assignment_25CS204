#include <stdio.h>

int main() {
    int accNum;
    char name[50];
    float balance;
    int choice;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &accNum);
    printf("Enter Account Holder Name: ");
    scanf("%s", name);
    printf("Enter Opening Balance: ");
    scanf("%f", &balance);

    while (1) {
        printf("\n1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Display Account Info\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Amount deposited successfully!\n");
                } else {
                    printf("Invalid amount!\n");
                }
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > balance) {
                    printf("Insufficient balance!\n");
                } else if (amount <= 0) {
                    printf("Invalid amount!\n");
                } else {
                    balance -= amount;
                    printf("Amount withdrawn successfully!\n");
                }
                break;

            case 3:
                printf("\nAccount Number: %d\n", accNum);
                printf("Holder Name: %s\n", name);
                printf("Current Balance: Rs. %.2f\n", balance);
                break;

            case 4:
                printf("Exiting banking system.\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}