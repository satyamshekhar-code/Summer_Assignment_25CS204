#include <stdio.h>

int main() {
    char names[100][50];
    char phones[100][15];
    int count = 0;
    int choice;

    while (1) {
        printf("\n1. Add Contact\n");
        printf("2. Display All Contacts\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Name: ");
                scanf("%s", names[count]);
                printf("Enter Phone Number: ");
                scanf("%s", phones[count]);
                count++;
                printf("Contact saved successfully!\n");
                break;

            case 2:
                if (count == 0) {
                    printf("No contacts found.\n");
                } else {
                    printf("\nName\tPhone Number\n");
                    for (int i = 0; i < count; i++) {
                        printf("%s\t%s\n", names[i], phones[i]);
                    }
                }
                break;

            case 3:
                printf("Exiting contact manager.\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}