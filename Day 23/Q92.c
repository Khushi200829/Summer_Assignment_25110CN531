 #include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0};
    int max = 0;
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n')
            count[(unsigned char)str[i]]++;
    }

    // Find the character with maximum frequency
    for (int i = 0; i < 256; i++) {
        if (count[i] > max) {
            max = count[i];
            ch = i;
        }
    }

    printf("Maximum occurring character: %c\n", ch);
    printf("Frequency: %d\n", max);

    return 0;
}