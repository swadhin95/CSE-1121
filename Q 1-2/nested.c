#include<stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);

    if(n%2 == 0)///Check if number is even or odd
    {
        if(n<=100)\
        {
            printf("%d Number is Even And Less Than 100\n", n);
        }
        else
        {
        printf("%d Number is Even not Less Than 100\n", n);

        }
    }
    else
    {
        printf("%d Number is not Even nor Less Than 100\n", n);
    }
    return 0;
}
