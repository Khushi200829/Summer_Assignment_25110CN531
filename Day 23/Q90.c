#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find the first repeating character
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            continue;

        count[(unsigned char)str[i]]++;

        if (count[(unsigned char)str[i]] == 2) {
            printf("First repeating character: %c\n", str[i]);
            return 0;
        }
    }

    printf("No repeating character found.\n");

    return 0;
}