#include <stdio.h>

int main() {
    int rollNumbers[100];
    char names[100][50];
    float marks[100];
    int count = 0;
    int choice;

    while (1) {
        printf("\n1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &rollNumbers[count]);
                printf("Enter Name: ");
                scanf("%s", names[count]);
                printf("Enter Marks: ");
                scanf("%f", &marks[count]);
                count++;
                printf("Record added successfully!\n");
                break;

            case 2:
                if (count == 0) {
                    printf("No records found.\n");
                } else {
                    printf("\nRoll No\tName\tMarks\n");
                    for (int i = 0; i < count; i++) {
                        printf("%d\t%s\t%.2f\n", rollNumbers[i], names[i], marks[i]);
                    }
                }
                break;

            case 3:
                if (count == 0) {
                    printf("No records available to search.\n");
                } else {
                    int searchRoll, found = 0;
                    printf("Enter Roll Number to search: ");
                    scanf("%d", &searchRoll);

                    for (int i = 0; i < count; i++) {
                        if (rollNumbers[i] == searchRoll) {
                            printf("\nRecord Found:\n");
                            printf("Roll Number: %d\n", rollNumbers[i]);
                            printf("Name: %s\n", names[i]);
                            printf("Marks: %.2f\n", marks[i]);
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Student with Roll Number %d not found.\n", searchRoll);
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