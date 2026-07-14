#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count[256] = {0};

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Mark characters present in the first string
    for (int i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)str1[i]] = 1;
    }

    printf("Common characters: ");

    // Print common characters only once
    for (int i = 0; str2[i] != '\0'; i++) {
        if (count[(unsigned char)str2[i]] == 1) {
            printf("%c ", str2[i]);
            count[(unsigned char)str2[i]] = 0;
        }
    }

    return 0;
}