#include <stdio.h>
int main()
{
    int held, attended;
    double perc;

    scanf("%d%d", &held, &attended);
    perc = (attended * 100.0) / held;
    if (perc < 70.0)
    {
        printf("%.2lf%%, Not Allowed\n", perc);
    }

    else
    {
        printf("%.2lf%%, Allowed\n", perc);
    }
    return 0;
}
