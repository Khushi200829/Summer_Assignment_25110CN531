#include <stdio.h>
#include <string.h>

#define MAX 50

// Function declarations
void addStudent(int n, int roll[], char name[][50], float marks[]);
void displayStudents(int n, int roll[], char name[][50], float marks[]);
void searchStudent(int n, int roll[], char name[][50], float marks[]);
void calculateAverage(int n, float marks[]);

int main() {

    int n, choice;

    int roll[MAX];
    char name[MAX][50];
    float marks[MAX];

    printf("Enter number of students: ");
    scanf("%d", &n);

    while(1) {

        printf("\n===== Student Management System =====\n");
        printf("1. Add Student Records\n");
        printf("2. Display Student Records\n");
        printf("3. Search Student\n");
        printf("4. Calculate Average Marks\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);


        switch(choice) {

            case 1:
                addStudent(n, roll, name, marks);
                break;

            case 2:
                displayStudents(n, roll, name, marks);
                break;

            case 3:
                searchStudent(n, roll, name, marks);
                break;

            case 4:
                calculateAverage(n, marks);
                break;

            case 5:
                printf("Exiting program...");
                return 0;

            default:
                printf("Invalid choice!");
        }
    }

    return 0;
}


// Function to add students
void addStudent(int n, int roll[], char name[][50], float marks[]) {

    int i;

    for(i = 0; i < n; i++) {

        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%f", &marks[i]);
    }

    printf("Records added successfully!\n");
}


// Function to display students
void displayStudents(int n, int roll[], char name[][50], float marks[]) {

    int i;

    printf("\nRoll No\tName\tMarks\n");

    for(i = 0; i < n; i++) {

        printf("%d\t%s\t%.2f\n",
               roll[i], name[i], marks[i]);
    }
}


// Function to search student
void searchStudent(int n, int roll[], char name[][50], float marks[]) {

    int search, i, found = 0;

    printf("Enter roll number to search: ");
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

    if(found == 0)
        printf("Student not found.\n");
}


// Function to calculate average
void calculateAverage(int n, float marks[]) {

    int i;
    float sum = 0, average;

    for(i = 0; i < n; i++) {

        sum = sum + marks[i];
    }

    average = sum / n;

    printf("Average Marks = %.2f\n", average);
}