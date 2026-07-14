#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact contact[100];
    int n, i;

    printf("Enter number of contacts: ");
    scanf("%d", &n);

    // Input contact details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of Contact %d\n", i + 1);

        printf("Name: ");
        scanf("%s", contact[i].name);

        printf("Phone Number: ");
        scanf("%s", contact[i].phone);
    }

    // Display contact details
    printf("\n===== Contact List =====\n");
    printf("Name\t\tPhone Number\n");

    for (i = 0; i < n; i++) {
        printf("%-15s %s\n", contact[i].name, contact[i].phone);
    }

    return 0;
}