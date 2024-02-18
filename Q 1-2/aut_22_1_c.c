#include<stdio.h>

int main(){
    double b, a = 0.1;  ///double cant store value properly
    b = a * 3;
    printf("%.30lf\n", b);
    if (a * 3 == 0.3)
    {
    printf("Equal\n");
    }
    else
    {
    printf("Not Equal\n");
    }
    return 0;
}
