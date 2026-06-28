#include <stdio.h>
#include <string.h>

int main() {
    int bookIds[100];
    char titles[100][50];
    int count = 0;
    int choice;

    while (1) {
        printf("\n1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &bookIds[count]);
                printf("Enter Book Title: ");
                scanf("%s", titles[count]);
                count++;
                printf("Book added successfully!\n");
                break;

            case 2:
                if (count == 0) {
                    printf("Library is empty.\n");
                } else {
                    printf("\nBook ID\tTitle\n");
                    for (int i = 0; i < count; i++) {
                        printf("%d\t%s\n", bookIds[i], titles[i]);
                    }
                }
                break;

            case 3:
                printf("Exiting library system.\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}