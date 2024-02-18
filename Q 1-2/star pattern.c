#include<stdio.h>

int main()
{
    int i , j , n ,m = 1 ;

    ///Type 7 >>>>>diamond  shape star
 /* scanf("%d",&n);
  int spaces=n-1;
  int stars=1;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=spaces;j++)
    {
      printf(" ");
    }
    for(int k=1;k<=stars;k++)
    {
      printf("*");
    }
    if(spaces>i)
    {
      spaces=spaces-1;
      stars=stars+2;
    }
    if(spaces<i)
    {
      spaces=spaces+1;
      stars=stars-2;
    }
    printf("\n");
  }*/

   ///Type 6 >>>>>N  upside-down Pyramid star

    /*scanf("%d", &n);
    for (i = n ; i >= 1 ; i--)
    {
        for ( j = 1 ; j <  m  ; j++)
        {
            printf(" ");
        }
        for( int k = 1 ; k<=2*i - 1 ; k++ )
        {
            printf("*");
        }
        m++;
        printf("\n");
    }*/

    ///Type 5 >>>>>N shape upside Pyramid star

    /*scanf("%d", &n);
    for (i = n ; i >= 1 ; i--)
    {
        for ( j = 1 ; j <=  i - 1  ; j++)
        {
            printf(" ");
        }
        for( int k = 1 ; k<=m ; k++ )
        {
            printf("*");
        }
        m+=2;
        printf("\n");
    }*/


    ///Type 4 >>>>>N Pyramid right star

    /*scanf("%d", &n);
    for (i = n ; i >= 1 ; i--){
        for ( j = 1 ; j <=  i - 1  ; j++){
            printf(" ");
        }
        for (int k = 1 ; k <= m; k++){
            printf("*");
        }
        m++;
        printf("\n");
    }*/


    ///Type 3 >>>>>N Pyramid left star

    /*scanf("%d", &n);
    for (i = 1 ; i <= n ; i++){
        for ( j = 1 ; j <= i ; j++){
            printf("*");
        }
        printf("\n");
    }*/


    ///Type 2 >>>>>N * M star
    scanf("%d %d", &n, &m);

     for (i = 1 ; i <= n ; i++){
        for ( j = 1 ; j <= m ; j++){
            printf("* ");
        }
        printf("\n");
    }

    ///Type 1 >>>>>N * N star
    /*scanf("%d", &n);
    for (i = 1 ; i <= n ; i++){
        for ( j = 1 ; j <= n ; j++){
            printf("%d %d\n", i , j);
        }
        printf("\n");
    }*/


    return 0;
}
