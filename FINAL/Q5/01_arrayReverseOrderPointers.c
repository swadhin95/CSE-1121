#include <stdio.h>

void printArrayInReverse(int *arr, int n) {
    int *ptr = arr + n - 1; // Point to the last element of the array
    for (int i = 0; i < n; i++) {
        printf("%d ", *ptr); // Print the value pointed by ptr
        ptr--; // Move the pointer to the previous element
    }
    printf("\n"); // New line for better output formatting
}

int main() {
    int n;

    // Ask the user for the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Input elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the array in reverse order
    printf("Array in reverse order: ");
    printArrayInReverse(arr, n);

    return 0;
}

