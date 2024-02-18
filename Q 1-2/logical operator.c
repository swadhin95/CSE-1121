#include<stdio.h>

int main(){

/*  && 	Logical and	    x < 5 &&  x < 10	Returns 1 if both statements are true
    || 	Logical or	    x < 5 || x < 4	    Returns 1 if one of the statements is true
    !	Logical not	    !(x < 5 && x < 10)	Reverse the result, returns 0 if the result is 1    */

    int a , b , c , d ;

    a=15;
    b=10;
    c=10;


    //d = !a;
    d = !(a+b && 0) ;

    printf("%d\n", d);


    return 0;
}
