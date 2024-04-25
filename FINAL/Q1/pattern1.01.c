  #include<stdio.h>
  int main()
  {

    ///Sample Input             Sample Output
    ///        3                              111
    ///                                        000
    ///                                        111

    int  n;
    scanf("%d", &n);
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= n ; j++){
                if (i % 2 == 1){
                    printf( "1" );
                }
                else{
                    printf( "0" );
                }

        }
        printf("\n");
    }


    return 0;
}

