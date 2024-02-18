#include <stdio.h>
int main()
{
    int x, i;
    scanf("%d", &x);
    printf("1");
    for (i = 3; i < x; i += 2)
    {
        if (x % i == 0)
        {
            printf(" %d", i);
        }
    }
    printf("\n");
    return 0;
}
