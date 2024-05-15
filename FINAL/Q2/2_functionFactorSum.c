#include <stdio.h>
int factSum(int n) {
    int i , sum=0 ;
    printf("Factors of %d are: ", n);
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            printf("%d  ", i);
            sum += i ;
        }
    }
    printf("\n", i);
    printf("%d", sum);
}
int main(){
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    return factSum(num);
    return 0;
}

