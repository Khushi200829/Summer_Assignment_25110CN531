#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book book[100];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    
    for (i = 0; i < n; i++) 
     {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &book[i].id);

       printf("Book Title: ");
       getchar();  
       fgets(book[i].title, 
       sizeof(book[i].title), stdin);

       printf("Author Name: ");
       fgets(book[i].author, 
       sizeof(book[i].author), stdin);
    }

    
    printf("\n===== Library Records =====\n");
    printf("ID\tTitle\t\tAuthor\n");

    for (i = 0; i < n; i++)
     {
        printf("%d\t%s\t\t%s\n",
               book[i].id,
               book[i].title,
               book[i].author);
    }

    return 0;
}