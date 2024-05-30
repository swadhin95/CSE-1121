#include <stdio.h>

int main() {
    // Define a one-dimensional integer array called array with 12 elements
    int Arr[12];

    // Assign 4 elements to the first four array elements
    Arr[0] = 1;
    Arr[1] = 5;
    Arr[2] = 6;
    Arr[3] = 11;

    // Assign 0 to the rest of the elements
    for (int i = 4; i <= 11; i++) {
        Arr[i] = 0;
    }

    // Print the elements of the array
    printf("Elements of the array:\n");
    for (int i = 0; i < 12; i++) {
        printf("%d ", Arr[i]);
    }
    printf("\n");

    return 0;
}
