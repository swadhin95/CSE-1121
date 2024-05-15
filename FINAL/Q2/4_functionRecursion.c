#include <stdio.h>
 int fun(int n){
    if( n<=1 ){
        return 1;
        printf("1r\n");
    }
    if ( n%2 == 0){
        return fun(n/2);
        printf("2r\n");
    }
    return  fun(n/2) + fun(n/2+1);
 }

int main() {
    int  n = 11 + (56%2);
    printf(" %d", fun(11));
    return 0;
}
