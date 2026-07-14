#include <stdio.h>
#include <string.h>

#define MAX 50

int id[MAX];
char title[MAX][100];
char author[MAX][100];
int issued[MAX];
int n;

// Function Declarations
void addBooks();
void displayBooks();
void searchBook();
void issueBook();

int main()
{
    int choice;

    printf("Enter number of books: ");
    scanf("%d", &n);
    getchar();   // Clear newline

    addBooks();

    while (1)
    {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Display Books\n");
        printf("2. Search Book\n");
        printf("3. Issue Book\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();   // Clear newline

        switch(choice)
        {
            case 1:
                displayBooks();
                break;

            case 2:
                searchBook();
                break;

            case 3:
                issueBook();
                break;

            case 4:
                printf("Thank you!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}

// Add Books
void addBooks()
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &id[i]);
        getchar();

        printf("Book Title: ");
        fgets(title[i], sizeof(title[i]), stdin);
        title[i][strcspn(title[i], "\n")] = '\0';

        printf("Author Name: ");
        fgets(author[i], sizeof(author[i]), stdin);
        author[i][strcspn(author[i], "\n")] = '\0';

        issued[i] = 0;
    }
}

// Display Books
void displayBooks()
{
    int i;

    printf("\n------------------------------------------------------------\n");
    printf("ID\tTitle\t\tAuthor\t\tStatus\n");
    printf("------------------------------------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%s\t\t", id[i], title[i], author[i]);

        if(issued[i] == 0)
            printf("Available\n");
        else
            printf("Issued\n");
    }
}

// Search Book
void searchBook()
{
    int i, found = 0;
    char search[100];

    printf("Enter Book Title: ");
    fgets(search, sizeof(search), stdin);
    search[strcspn(search, "\n")] = '\0';

    for(i = 0; i < n; i++)
    {
        if(strcmp(title[i], search) == 0)
        {
            printf("\nBook Found!\n");
            printf("Book ID : %d\n", id[i]);
            printf("Title   : %s\n", title[i]);
            printf("Author  : %s\n", author[i]);

            if(issued[i] == 0)
                printf("Status  : Available\n");
            else
                printf("Status  : Issued\n");

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Book not found!\n");
}

// Issue Book
void issueBook()
{
    int i, bookid, found = 0;

    printf("Enter Book ID to issue: ");
    scanf("%d", &bookid);
    getchar();

    for(i = 0; i < n; i++)
    {
        if(id[i] == bookid)
        {
            if(issued[i] == 0)
            {
                issued[i] = 1;
                printf("Book Issued Successfully!\n");
            }
            else
            {
                printf("Book is already issued.\n");
            }

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Book ID not found!\n");
}