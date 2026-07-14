#include <stdio.h>
#include <string.h>

#define MAX 50

int main() {
    int n, i, roll[MAX], search, found = 0;
    char name[MAX][50];
    float marks[MAX];

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Input student records
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%f", &marks[i]);
    }

    // Display all records
    printf("\n----- Student Records -----\n");
    printf("Roll No\tName\tMarks\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n", roll[i], name[i], marks[i]);
    }

    // Search by roll number
    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++) {
        if(roll[i] == search) {
            printf("\nStudent Found!\n");
            printf("Roll Number: %d\n", roll[i]);
            printf("Name: %s\n", name[i]);
            printf("Marks: %.2f\n", marks[i]);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("\nStudent record not found.\n");
    }

    return 0;
}