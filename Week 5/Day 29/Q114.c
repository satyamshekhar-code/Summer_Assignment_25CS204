#include <stdio.h>

int main() {
    int arr[100];
    int n = 0;
    int choice, element;

    while (1) {
        printf("\n1. Insert Element\n");
        printf("2. Display Array\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to insert: ");
                scanf("%d", &element);
                arr[n] = element;
                n++;
                printf("Element inserted!\n");
                break;

            case 2:
                if (n == 0) {
                    printf("Array is empty.\n");
                } else {
                    printf("Array elements: ");
                    for (int i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}