#include <stdio.h>
#include <stdbool.h>

bool containsStrictlyIncreasing(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        // Check if the current element is greater than the previous one
        if (arr[i] <= arr[i - 1]) {
            return false; // If not, return false
        }
    }
    return true; // If all elements form a strictly increasing sequence, return true
}

int main() {
    int arr[] = {1, 3, 145, 7, 9}; // Example array with a strictly increasing sequence
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    if (containsStrictlyIncreasing(arr, size)) {
        printf("YES.\n");
    } else {
        printf("NO.\n");
    }

    return 0;
}

