#include <stdio.h>

int main() {
    int arr[] = {2, 4, 3, 5, 7, 8, 9};
    int n = 7;
    int sum = 7;
    int i, j, found = 0;

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                printf("Pair found: %d and %d\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if (found == 0) {
        printf("No pair found.");
    }

    return 0;
}