#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basic, hra, da, pf, netSalary;
};

int main() {
    struct Employee emp[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Basic Salary: ");
        scanf("%f", &emp[i].basic);

        printf("HRA: ");
        scanf("%f", &emp[i].hra);

        printf("DA: ");
        scanf("%f", &emp[i].da);

        printf("PF: ");
        scanf("%f", &emp[i].pf);

        // Calculate Net Salary
        emp[i].netSalary = emp[i].basic + emp[i].hra + emp[i].da - emp[i].pf;
    }

    // Display salary details
    printf("\n===== Salary Records =====\n");
    printf("ID\tName\tBasic\tHRA\tDA\tPF\tNet Salary\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",
               emp[i].id,
               emp[i].name,
               emp[i].basic,
               emp[i].hra,
               emp[i].da,
               emp[i].pf,
               emp[i].netSalary);
    }

    return 0;
}