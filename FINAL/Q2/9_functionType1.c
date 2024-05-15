#include <stdio.h>
///Function With No Arguments and No Return Value:
///When a function has no arguments, it does not receive data from the calling
///function as well as when it does not return value, the calling function does not
///receive data from the called function. If a function does not return value, we
///use keyword void as return type.

void starline() // function definition
{
int j;
for(j=0; j<45; j++) //function body
printf("*");
}
int main()
{
starline(); //call to function
return 0;
}
