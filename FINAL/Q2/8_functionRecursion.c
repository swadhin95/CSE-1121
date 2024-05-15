#include <stdio.h>
 void shout (int n){
    if (n <= 0) return;
    printf("%d\n ", n);
    shout (n / 2);
    printf("%d \n", n);
 }

int main() {
    int  n = 56;
    shout (n);
    return 0;
}

