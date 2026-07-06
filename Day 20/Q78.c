#include <stdio.h>

int main() {
    int n, i, j;
    int A[10][10];
    int symmetric = 1;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Check for symmetry
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (A[i][j] != A[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if (!symmetric)
            break;
    }

    if (symmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}