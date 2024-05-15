#include <stdio.h>
///Function With No Arguments and Return Value:
///In this type of function category a function takes no arguments from calling
///function but it returns a value to calling function
int factorial ()
{
int n,i;
int prod = 1;
printf("Enter a number: ");
scanf("%d",&n);
if (n > 1)
for (i = 2; i <= n; ++i)
prod *= i;
return(prod);
}
int main()
{
    int res;
    res = factorial(); //call to function
    printf("n! = %d", res);
    return 0;
}
