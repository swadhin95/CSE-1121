#include<stdio.h>
#include<string.h>
#define size 100
int main()
{
    char s1[size], s2[size];
    int i, j = 0;
    scanf("%s", s1);
    for(i = 0; s1[i] != '\0'; i++)
    {
        if(s1[i] >= 'a' && s1[i] <= 'z')
        {
            if(s1[i] >= 'a' && s1[i] <= 'w')
            s2[j] = s1[i] + 3;
            else if(s1[i] == 'x')
            s2[j] = 'a';
            else if(s1[i] == 'y')
            s2[j] = 'b';
            else if(s1[i] == 'z')
            s2[j] = 'c';
            j++;
        }

        else if(s1[i] >= 'A' && s1[i] <= 'Z')
        {
        if(s1[i] >= 'A' && s1[i] <= 'W')
        s2[j] = s1[i] + 3;
        else if(s1[i] == 'X')
        s2[j] = 'A';
        else if(s1[i] == 'Y')
        s2[j] = 'B';
        else if(s1[i] == 'Z')
        s2[j] = 'C';
        j++;
        }

        else if(s1[i] >= '0' && s1[i] <= '9')
        {
        if(s1[i] >= '2' && s1[i] <= '9')
        s2[j] = s1[i] - 2;
        else if(s1[i] == '1')
        s2[j] = '9';
        else if(s1[i] == '0')
        s2[j] = '8';
        j++;
        }

    }
    s2[j] = '\0';
    printf("%s", s2);
    return 0;
}
