#include <stdio.h>
///Functions With Arguments And Return Value:
///In this type of function category a function takes arguments from calling
///function and it returns a value to calling function
/* convert a lowercase character to uppercase using a programmer-defined function */
char lower_to_upper(char c1) /* function definition */
{
char c2;
///A-Z(65-90)
///a-z(97-122)
c2 = (c1 >= 'a' && c1 <= 'z') ? ('A' + c1 - 'a') : c1;
return (c2);
}
int main( )
{
char lower, upper;
printf("Please enter a lowercase character: ");
scanf ( "%c", &lower) ;
upper = lower_to_upper( lower) ; //call to function
printf ("The uppercase equivalent is %c\n", upper) ;
printf("%d\n",lower);
printf("%c\n",lower);
return 0;
}
