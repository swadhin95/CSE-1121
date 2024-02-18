#include <stdio.h>
int main()
{
    char color ;
    scanf("%c",&color);

    switch (color)
    {
    case 'R':
    case 'r':
    printf("Red\n");
    break;
    case 'G':
    case 'g':
    printf("Green\n");
    break;
    case 'B':
    case 'b':
    printf("Blue\n");
    break;
    default:
    printf("Not a prime color\n");
    }

  return 0;
}
