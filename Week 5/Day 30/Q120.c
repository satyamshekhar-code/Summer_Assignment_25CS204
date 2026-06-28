#include <stdio.h>

void showMenu() {
    printf("\n--- Project Menu ---\n");
    printf("1. Check System Status\n");
    printf("2. Exit\n");
    printf("Enter choice: ");
}

int main() {
    int choice;

    while (1) {
        showMenu();
        scanf("%d", &choice);

        if (choice == 1) {
            printf("System is running perfectly.\n");
        } else if (choice == 2) {
            printf("Exiting mini project.\n");
            break;
        } else {
            printf("Invalid input!\n");
        }
    }
    return 0;
}