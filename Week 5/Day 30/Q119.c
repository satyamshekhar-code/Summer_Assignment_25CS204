#include <stdio.h>

int main() {
    int ids[50];
    int count = 0;
    int choice;

    while (1) {
        printf("\n1. Register Employee ID\n");
        printf("2. View Registered IDs\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter New ID: ");
                scanf("%d", &ids[count]);
                count++;
                printf("Employee Registered!\n");
                break;

            case 2:
                if (count == 0) {
                    printf("No employees registered.\n");
                } else {
                    printf("Employee IDs: ");
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