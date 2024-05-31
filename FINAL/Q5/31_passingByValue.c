///Passing by Value

///When you pass an argument to a function by value, you are passing a copy of the argument's value.
///Changes made to the parameter inside the function do not affect the original value.

#include <stdio.h>

// Function to add 10 to the value of a
void addTen(int a) {
    a = a + 10;
    printf("Inside function addTen: a = %d\n", a);
}

int main() {
    int x = 5;
    printf("Before calling addTen: x = %d\n", x);
    addTen(x);  // Pass by value
    printf("After calling addTen: x = %d\n", x);
    return 0;
}

///output:
    ///Before calling addTen: x = 5
    ///Inside function addTen: a = 15
    ///After calling addTen: x = 5

    ///In this example, the value of x is copied into the parameter a. Changes to a do not affect x.

