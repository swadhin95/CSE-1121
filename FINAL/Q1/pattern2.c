  #include<stdio.h>
  int main()
  {

    ///Sample Input             Sample Output
    ///        3   2                           * *
    ///                                          * *
    ///                                          * *

    int i , j , n , m;
    scanf("%d %d", &n, &m);

     for (i = 1 ; i <= n ; i++){
        for ( j = 1 ; j <= m ; j++){
            printf("* ");
        }
        printf("\n");
    }


    return 0;
}


