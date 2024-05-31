#include <stdio.h>

int main() {
    int N, M, S;

    // Input the dimensions of the array
    printf("Enter the number of rows (N): ");
    scanf("%d", &N);
    printf("Enter the number of columns (M): ");
    scanf("%d", &M);

    int A[N][M];

        // Input the target sum S
    printf("Enter the target sum (S): ");
    scanf("%d", &S);

    // Input the array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }



    int count = 0;

    // Calculate the sum of each column and count the columns with sum equal to S
    for (int col = 0; col < M; col++) {
        int col_sum = 0;
        for (int row = 0; row < N; row++) {
            col_sum += A[row][col];
        }
        if (col_sum == S) {
            count++;
        }
    }

    // Print the result
    printf("Number of columns with sum equal to %d: %d\n", S, count);

    return 0;
}
