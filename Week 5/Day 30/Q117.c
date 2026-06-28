#include <stdio.h>

int main() {
    int rollNumbers[50];
    char names[50][50];
    int count = 0;
    int choice;

    while (1) {
        printf("\n1. Add Student\n");
        printf("2. Show Student List\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &rollNumbers[count]);
                printf("Enter Name: ");
                scanf("%s", names[count]);
                count++;
                printf("Student added!\n");
                break;

            case 2:
                if (count == 0) {
                    printf("Records empty.\n");
                } else {
                    printf("\nRoll No\tName\n");
                    for (int i = 0; i < count; i++) {
                        printf("%d\t%s\n", rollNumbers[i], names[i]);
                    }
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