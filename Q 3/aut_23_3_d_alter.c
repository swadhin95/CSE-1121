#include <stdio.h>
int main()
{
    int number, digit, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    while (number > 0) {
        digit = number % 10;  	// Get the last digit
        sum += digit;             	// Add the digit to the sum
        number /= 10;             	// Remove the last digit
    }

    printf("Sum of the digits: %d\n", sum);
    return 0;
}

