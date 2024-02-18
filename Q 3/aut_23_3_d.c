#include <stdio.h>
int main()
{
    int X;
    scanf("%d", &X);

    int sum_of_even_divisors = 0;

    for (int i = 1; i <= X; i++) {
        if (X % i == 0) {
            printf("%d ", i);

            if (i % 2 == 0)
                sum_of_even_divisors += i;
        }
    }
    if (sum_of_even_divisors > 0)
        printf("\nSUM = %d\n", sum_of_even_divisors);
    else
        printf("\nNULL\n");
    return 0;
}

