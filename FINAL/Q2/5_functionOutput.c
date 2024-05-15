#include <stdio.h>

 int magic (int n){
    int m = 0 ;
    m +=n ;
    return m;
 }

int main() {
    for (int i = 1 ; i <= 5 ; i++){
        printf("%d ", magic(i));
    }
    return 0;
}
