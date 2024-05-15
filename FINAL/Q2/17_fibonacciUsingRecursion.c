// C Program to find the fibonacci number using tree
// recursion
#include <stdio.h>

int fibonacci(int n)
{
    // Base case
    // Fibonacci of 0 and 1 is the number itself
    if (n <= 1) {
        return n;
    }
    else {
        // Tree recursive calls
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{

    // function call
    int n = fibonacci(7);

    // print 5th fibonacci number
    printf("%d", n);

    return 0;
}
