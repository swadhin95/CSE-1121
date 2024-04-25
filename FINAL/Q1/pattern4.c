  #include<stdio.h>
  int main()
  {

    ///Sample Input             Sample Output
    ///        3                                   *
    ///                                           * *
    ///                                       *  *  *

    int  n , m = 1 ;
    scanf("%d", &n);
    for (int i = n ; i >= 1 ; i--){
        for (int j = 1 ; j <=  i - 1  ; j++){
            printf(" ");
        }
        for (int k = 1 ; k <= m; k++){
            printf("*");
        }
        m++;
        printf("\n");
    }


    return 0;
}



