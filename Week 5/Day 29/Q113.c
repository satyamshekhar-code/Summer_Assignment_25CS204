#include <stdio.h>

int main() {
    int choice;
    float num1, num2;

    while (1) {
        printf("\n1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting calculator.\n");
            return 0;
        }

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
        }

        switch (choice) {
            case 1:
                printf("Result: %.2f\n", num1 + num2);
                break;
            case 2:
                printf("Result: %.2f\n", num1 - num2);
                break;
            case 3:
                printf("Result: %.2f\n", num1 * num2);
                break;
            case 4:
                if (num2 != 0) {
                    printf("Result: %.2f\n", num1 / num2);
                } else {
                    printf("Error! Division by zero.\n");
                }
                break;
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}