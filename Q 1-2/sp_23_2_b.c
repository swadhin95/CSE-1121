#include<stdio.h>
#include<math.h>

int main()
{
    int n , a , b , c ;
    double peri , areaTrap , areaCir;

    scanf("%d", &n);

    if(n == 1)
    {
       scanf("%d %d", &a , &b);
       peri = 2 * (a + b);
       printf("%.2lf", peri);
    }
    if(n == 2)
    {
       scanf("%d %d %d", &a , &b , &c);
       areaTrap =  ((double)(a + b) / 2) * c;
       printf("%.2lf", areaTrap);
    }
    if(n == 3)
    {
       scanf("%d", &a );
       areaCir = 3.14159 * pow(a , 2) ;
       printf("%.2lf", areaCir);
    }

    return 0 ;
}
