#include <stdio.h>

int main() {
    int empIds[100];
    char names[100][50];
    float basicSalaries[100];
    float netSalaries[100];
    int count = 0;
    int choice;

    while (1) {
        printf("\n1. Add Employee Salary Record\n");
        printf("2. Display Salary Slips\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &empIds[count]);
                printf("Enter Name: ");
                scanf("%s", names[count]);
                printf("Enter Basic Salary: ");
                scanf("%f", &basicSalaries[count]);

                float hra = basicSalaries[count] * 0.20;
                float da = basicSalaries[count] * 0.10;
                float pf = basicSalaries[count] * 0.12;

                netSalaries[count] = basicSalaries[count] + hra + da - pf;
                count++;
                printf("Salary record calculated and added successfully!\n");
                break;

            case 2:
                if (count == 0) {
                    printf("No salary records found.\n");
                } else {
                    printf("\nID\tName\tBasic Sal\tNet Salary\n");
                    for (int i = 0; i < count; i++) {
                        printf("%d\t%s\t%.2f\t%.2f\n", empIds[i], names[i], basicSalaries[i], netSalaries[i]);
                    }
                }
                break;

            case 3:
                printf("Exiting system.\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}