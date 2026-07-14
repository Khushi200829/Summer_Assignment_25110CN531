#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[100];
    int choice;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    while (1)
    {
        printf("\n===== MENU DRIVEN STRING OPERATIONS =====\n");
        printf("1. Find Length of First String\n");
        printf("2. Copy First String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse First String\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Length of \"%s\" = %d\n", str1, strlen(str1));
                break;

            case 2:
                strcpy(temp, str1);
                printf("Copied String = %s\n", temp);
                break;

            case 3:
                strcpy(temp, str1);
                strcat(temp, str2);
                printf("Concatenated String = %s\n", temp);
                break;

            case 4:
                if (strcmp(str1, str2) == 0)
                    printf("Strings are Equal.\n");
                else
                    printf("Strings are Not Equal.\n");
                break;

            case 5:
            {
                strcpy(temp, str1);
                int i, len = strlen(temp);
                char ch;

                for (i = 0; i < len / 2; i++)
                {
                    ch = temp[i];
                    temp[i] = temp[len - i - 1];
                    temp[len - i - 1] = ch;
                }

                printf("Reversed String = %s\n", temp);
                break;
            }

            case 6:
                printf("Exiting Program...\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}