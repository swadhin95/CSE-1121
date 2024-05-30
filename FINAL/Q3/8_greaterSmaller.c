#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, X;

    // Input the value of N
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[100];

    // Input N numbers and store them in the array
    printf("Enter %d numbers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the value of X
    printf("Enter a number X: ");
    scanf("%d", &X);

    // Print numbers larger than X
    printf("Numbers larger than %d: ", X);
    for (int i = 0; i < N; i++) {
        if (arr[i] > X) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    // Print numbers smaller than X
    printf("Numbers smaller than %d: ", X);
    for (int i = 0; i < N; i++) {
        if (arr[i] < X) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    // Free dynamically allocated memory
    free(arr);

    return 0;
}
