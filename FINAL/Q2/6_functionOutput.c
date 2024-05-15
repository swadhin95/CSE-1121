#include <stdio.h>
///cumulative sum of previous code

 int magic (int n){
     int m, sum=0;
    for(m = 1 ; m <= n ; m++){
        sum +=m ;
    }

    return sum;
 }

int main() {
    for (int i = 1 ; i <= 5 ; i++){
        printf("%d ", magic(i));
    }
    return 0;
}
