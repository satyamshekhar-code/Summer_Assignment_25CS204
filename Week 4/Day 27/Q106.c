#include <stdio.h>

int main() {
    int empIds[100];
    char names[100][50];
    float salaries[100];
    int count = 0;
    int choice;

    while (1) {
        printf("\n1. Add Employee Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &empIds[count]);
                printf("Enter Name: ");
                scanf("%s", names[count]);
                printf("Enter Salary: ");
                scanf("%f", &salaries[count]);
                count++;
                printf("Record added successfully!\n");
                break;

            case 2:
                if (count == 0) {
                    printf("No records found.\n");
                } else {
                    printf("\nID\tName\tSalary\n");
                    for (int i = 0; i < count; i++) {
                        printf("%d\t%s\t%.2f\n", empIds[i], names[i], salaries[i]);
                    }
                }
                break;

            case 3:
                if (count == 0) {
                    printf("No records available to search.\n");
                } else {
                    int searchId, found = 0;
                    printf("Enter Employee ID to search: ");
                    scanf("%d", &searchId);

                    for (int i = 0; i < count; i++) {
                        if (empIds[i] == searchId) {
                            printf("\nRecord Found:\n");
                            printf("Employee ID: %d\n", empIds[i]);
                            printf("Name: %s\n", names[i]);
                            printf("Salary: %.2f\n", salaries[i]);
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Employee with ID %d not found.\n", searchId);
                    }
                }
                break;

            case 4:
                printf("Exiting system.\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}