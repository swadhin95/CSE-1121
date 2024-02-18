#include<stdio.h>

int main(){

    int a , b, c ;
    a = 2;
    b = 5;
    c = 5;
    if( a + b > c && b + c > a && a + c >b)
    {
        printf("Triangle will be formed\n");
    }
    //printf("Given Number is A Positive int:%d\n", a);

    return 0;
}
