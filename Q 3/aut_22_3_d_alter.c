#include <stdio.h>
int main()
{
    int n, m, ones = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    m = n;
    while (m != 0)
    {
        ones += m % 2;
        m /= 2;
    }
    if (ones % 2 == 0)
        printf("%d is an Evil number.\n", n);
    else
        printf("%d is an Odious number.\n", n);
    return 0;
}
