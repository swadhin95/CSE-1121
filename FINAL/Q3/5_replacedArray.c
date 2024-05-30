#include <stdio.h>

void replaceNumbers(int arr[], int N) {
    for (int i = 0; i < N; i++) {
        if (arr[i] > 0) {
            arr[i] = 1; // Replace positive numbers with 1
        } else if (arr[i] < 0) {
            arr[i] = 2; // Replace negative numbers with 2
        }
        // Leave 0 unchanged
    }
}

int main() {
    int arr[] = {3, -5, 0, 7, -2, 9, -8}; // Example array
    int N = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Print the original array
    printf("Original array: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Replace positive and negative numbers
    replaceNumbers(arr, N);

    // Print the modified array
    printf("Modified array: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

