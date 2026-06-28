#include <stdio.h>

int main() {
    int itemIds[100];
    int quantities[100];
    int count = 0;
    int choice;

    while (1) {
        printf("\n1. Add Item\n");
        printf("2. Display Inventory\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Item ID: ");
                scanf("%d", &itemIds[count]);
                printf("Enter Quantity: ");
                scanf("%d", &quantities[count]);
                count++;
                printf("Item added successfully!\n");
                break;

            case 2:
                if (count == 0) {
                    printf("Inventory is empty.\n");
                } else {
                    printf("\nItem ID\tQuantity\n");
                    for (int i = 0; i < count; i++) {
                        printf("%d\t%d\n", itemIds[i], quantities[i]);
                    }
                }
                break;

            case 3:
                printf("Exiting inventory system.\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}