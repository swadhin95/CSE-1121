
#include<stdio.h>

int main ()
{
    int result1, result2, var;

    var =5;



    result1 = ++var;
    result2 = var++;

    printf(" Pre Increment Result:%d\n",result1);
    printf(" post Increment Result:%d\n",result1);



    return 0;
}
