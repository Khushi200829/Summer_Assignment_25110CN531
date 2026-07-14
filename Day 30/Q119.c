#include <stdio.h>
#include <string.h>

#define MAX 50

int main() {
    int n, i, choice, search, found;

    int emp_id[MAX];
    char name[MAX][50];
    float salary[MAX];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp_id[i]);

        printf("Employee Name: ");
        scanf("%s", name[i]);

        printf("Salary: ");
        scanf("%f", &salary[i]);
    }

    while(1) {

        printf("\n----- Employee Management System -----\n");
        printf("1. Display Employees\n");
        printf("2. Search Employee\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nID\tName\tSalary\n");

                for(i = 0; i < n; i++) {
                    printf("%d\t%s\t%.2f\n", 
                           emp_id[i], name[i], salary[i]);
                }
                break;


            case 2:
                printf("\nEnter Employee ID to search: ");
                scanf("%d", &search);

                found = 0;

                for(i = 0; i < n; i++) {

                    if(emp_id[i] == search) {
                        printf("\nEmployee Found!\n");
                        printf("Employee ID: %d\n", emp_id[i]);
                        printf("Name: %s\n", name[i]);
                        printf("Salary: %.2f\n", salary[i]);

                        found = 1;
                        break;
                    }
                }

                if(found == 0) {
                    printf("Employee not found.\n");
                }

                break;


            case 3:
                printf("Exiting Employee Management System...\n");
                return 0;


            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}