#include <stdio.h>

int main()
{
    int A, B, C;
    printf("Enter three integers A, B, and C: ");
    scanf("%d %d %d", &A, &B, &C);

    if (A + B == C || A + C == B || B + C == A)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}

