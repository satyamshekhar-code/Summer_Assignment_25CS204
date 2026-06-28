#include <stdio.h>

int main() {
    int ids[50];
    int count = 0;
    int choice;

    while (1) {
        printf("\n1. Issue Book ID\n");
        printf("2. View Issued IDs\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Book ID to issue: ");
                scanf("%d", &ids[count]);
                count++;
                printf("Book issued!\n");
                break;

            case 2:
                if (count == 0) {
                    printf("No books issued.\n");
                } else {
                    printf("Issued Book IDs: ");
                    for (int i = 0; i < count; i++) {
                        printf("%d ", ids[i]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}