#include<stdio.h>

int main(){
    int arr[5], i=0;
    while(i<5)
        arr[i] = ++i;
    for(i=0; i<5; i++)
        printf("%d ", arr[i]);

return 0;
}
///should be:1 2 3 4 5
///output :    8 1 2 3 4
