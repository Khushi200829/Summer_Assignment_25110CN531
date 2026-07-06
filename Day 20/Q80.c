#include <stdio.h>

int main() {
    int rows, cols;
    int A[10][10];

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Column-wise sums are:\n");
    for (int j = 0; j < cols; j++) {
        int sum = 0;
        for (int i = 0; i < rows; i++) {
            sum += A[i][j];
        }
        printf("Sum of column %d = %d\n", j + 1, sum);
    }

    return 0;
}