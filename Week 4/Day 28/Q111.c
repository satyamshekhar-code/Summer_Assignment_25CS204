#include <stdio.h>

int main() {
    int totalSeats = 50;
    int bookedSeats = 0;
    int choice, tickets;

    while (1) {
        printf("\n1. View Available Seats\n");
        printf("2. Book Tickets\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Available Seats: %d\n", totalSeats - bookedSeats);
                break;

            case 2:
                printf("Enter number of tickets to book: ");
                scanf("%d", &tickets);
                if (tickets <= 0) {
                    printf("Invalid number of tickets!\n");
                } else if (tickets > (totalSeats - bookedSeats)) {
                    printf("Not enough seats available!\n");
                } else {
                    bookedSeats += tickets;
                    printf("%d tickets booked successfully!\n", tickets);
                }
                break;

            case 3:
                printf("Exiting booking system.\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}