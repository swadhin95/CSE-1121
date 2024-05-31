///Passing by Reference
///When you pass an argument to a function by reference, you are passing the address of the argument.
/// This allows the function to modify the original value.
#include <stdio.h>

// Function to add 10 to the value pointed to by a
void addTen(int *a) {
    *a = *a + 10;
    printf("Inside function addTen: *a = %d\n", *a);
}

int main() {
    int x = 5;
    printf("Before calling addTen: x = %d\n", x);
    addTen(&x);  // Pass by reference
    printf("After calling addTen: x = %d\n", x);
    return 0;
}
///Output:
    ///Before calling addTen: x = 5
    ///Inside function addTen: *a = 15
    ///After calling addTen: x = 15

    ///In this example, the address of x is passed to the function addTen. Inside the function, the pointer a is used to modify the value of x directly.
