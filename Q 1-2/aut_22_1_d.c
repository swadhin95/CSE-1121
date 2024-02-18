#include<stdio.h>

int main(){

    int F;
    double cel;
    scanf("%d", &F);
    cel = (5 / 9) * (F - 32);   ///type casting & truncated
    printf("%.2f\n", cel);

    return 0;
}
