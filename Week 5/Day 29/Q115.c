#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice;

    while (1) {
        printf("\n1. Find String Length\n");
        printf("2. Concatenate Strings\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a string: ");
                scanf("%s", str1);
                printf("Length of string: %d\n", (int)strlen(str1));
                break;

            case 2:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                strcat(str1, str2);
                printf("Concatenated string: %s\n", str1);
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