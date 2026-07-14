#include <stdio.h>

struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Product p[100];
    int n = 0;
    int choice, i, searchId;
    int found;

    do
    {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Products\n");
        printf("2. Display Products\n");
        printf("3. Search Product by ID\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter number of products: ");
                scanf("%d", &n);

                if(n <= 0 || n > 100)
                {
                    printf("Invalid number of products!\n");
                    n = 0;
                    break;
                }

                for(i = 0; i < n; i++)
                {
                    printf("\nEnter details of Product %d\n", i + 1);

                    printf("Product ID: ");
                    scanf("%d", &p[i].id);

                    printf("Product Name: ");
                    scanf("%s", p[i].name);

                    printf("Quantity: ");
                    scanf("%d", &p[i].quantity);

                    printf("Price: ");
                    scanf("%f", &p[i].price);
                }

                printf("Products added successfully!\n");
                break;


            case 2:
                if(n == 0)
                {
                    printf("No products available!\n");
                }
                else
                {
                    printf("\n===== PRODUCT LIST =====\n");
                    printf("ID\tName\tQuantity\tPrice\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("%d\t%s\t%d\t\t%.2f\n",
                               p[i].id,
                               p[i].name,
                               p[i].quantity,
                               p[i].price);
                    }
                }
                break;


            case 3:
                if(n == 0)
                {
                    printf("No products available!\n");
                }
                else
                {
                    printf("Enter Product ID to search: ");
                    scanf("%d", &searchId);

                    found = 0;

                    for(i = 0; i < n; i++)
                    {
                        if(p[i].id == searchId)
                        {
                            printf("\nProduct Found!\n");
                            printf("ID: %d\n", p[i].id);
                            printf("Name: %s\n", p[i].name);
                            printf("Quantity: %d\n", p[i].quantity);
                            printf("Price: %.2f\n", p[i].price);

                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Product not found!\n");
                    }
                }
                break;


            case 4:
                printf("Exiting Program...\n");
                break;


            default:
                printf("Invalid choice! Enter between 1-4.\n");
        }

    } while(choice != 4);


    return 0;
}