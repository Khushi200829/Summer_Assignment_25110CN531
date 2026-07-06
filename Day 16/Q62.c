#include <stdio.h>

int main() {
    int arr[] = {2, 3, 2, 5, 3, 2, 4};
    int n = 7;
    int i, j;
    int maxCount = 0, element;

    for (i = 0; i < n; i++) {
        int count = 1;

        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            element = arr[i];
        }
    }

    printf("Maximum frequency element = %d\n", element);
    printf("Frequency = %d\n", maxCount);

    return 0;
}