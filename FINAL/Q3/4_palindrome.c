#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int arr[], int N) {
    for (int i = 0; i < N / 2; i++) {
        if (arr[i] != arr[N - i - 1]) {
            return false; // If elements don't match, it's not a palindrome
        }
    }
    return true; // If all elements match, it's a palindrome
}

int main() {
    int arr[] = {1, 2, 3, 4, 3, 2, 1}; // Example array
    int N = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    if (isPalindrome(arr, N)) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }
    return 0;
}

