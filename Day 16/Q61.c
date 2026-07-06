#include <stdio.h>

int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int n = 6;
    int i, sum = 0, total, missing;

    // Find the sum of array elements
    for (i = 0; i < n - 1; i++) {
        sum = sum + arr[i];
    }

    // Find the sum of numbers from 1 to n
    total = n * (n + 1) / 2;

    // Calculate the missing number
    missing = total - sum;

    printf("Missing number = %d", missing);

    return 0;
}