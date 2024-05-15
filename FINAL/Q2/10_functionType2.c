#include <stdio.h>
///Function With Arguments And No Return Value:
///In this type of function category a function takes arguments from calling
///function but it does not return any value to calling function.
void maximum(int x, int y)
{
int z;
z = (x >= y) ? x : y;
printf ("Maximum value = %d" , z);
return ;
}
int main()
{ int a,b;
printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
maximum(a,b); //call to function
return 0;
}
