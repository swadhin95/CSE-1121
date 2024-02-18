#include<stdio.h>

int main()
{
    int m1 , p1 , m2 , p2 , A , B ;

    scanf("%d %d %d %d", &m1, &p1, &m2, &p2);
    A = m1 + p1 ;
    B = m2 + p2 ;

    if( A > B ){
        printf("A\n");
    }
    else if(B>A){
        printf("B\n");
    }
    else if ( A == B){
        if( m1 >m2){
           printf("A\n");
        }
        else if(m2>m1){
            printf("B\n");
        }
        else
        {
            printf("BOTH\n");
        }
    }

    return 0 ;
}
