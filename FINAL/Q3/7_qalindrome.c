#include <stdio.h>

int main() {
    int tr ;
    int arr[] = {1, 2, 5, 8 , 6 ,7, 8 , 5 }; // Example array
    int N = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    for (int i = 0; i < N / 2; i++) {
        if (arr[i] %2 == 0  && arr[N - i - 1] %2 == 0 || arr[i] %2 == 1  && arr[N - i - 1] %2 == 1) {
            tr++;

        }
    }

    if(tr == N/2){
        printf("YES");
    }
    else{
        printf("NO");
    }


    return 0;
}

