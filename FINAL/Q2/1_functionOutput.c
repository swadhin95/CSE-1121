#include <stdio.h>
 int m = 15;
 int change (int n){
    m = m+ 10 ;
    return m;
 }

int main() {
    int  m = 10;
    printf(" %d", change(m));
    return 0;
}

