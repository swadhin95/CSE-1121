#include<stdio.h>

int main()
{
    int a, n , cnt ,sum = 0;
    a = 1;
    n=100;
    cnt= 0;
    while (a<n){
            if(a%3 == 0){
                cnt ++;
            }
        a++;
    }

    printf("%d\n",cnt);


    return 0;
}
