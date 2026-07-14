#include <stdio.h>

int main() {
    int totalTickets = 100;
    int choice = 0, tickets;

    while (1) {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. View Available Tickets\n");
        printf("2. Book Tickets\n");
        printf("3. Cancel Tickets\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input!\n");
            break;
        }

        if (choice == 4) {
            printf("Thank you for using the Ticket Booking System.\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("Available Tickets: %d\n", totalTickets);
                break;

            case 2:
                printf("Enter number of tickets: ");
                scanf("%d", &tickets);

                if (tickets > 0 && tickets <= totalTickets) {
                    totalTickets -= tickets;
                    printf("Booking Successful!\n");
                } 
                else {
                    printf("Invalid number of tickets.\n");
                }
                
                break;

            case 3:
                printf("Enter number of tickets to cancel: ");
                scanf("%d", &tickets);

                if (tickets > 0) {
                    totalTickets += tickets;
                    printf("Cancellation Successful!\n");
                } else {
                    printf("Invalid number of tickets.\n");
                }
                break;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}