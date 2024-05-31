#include<stdio.h>
#include<string.h>
int main()
{
    int i , sum = 0 ;
    char S[30];
    gets(S);
    for(i = 0; S[i] != '\0'; i++)
    {
        sum += S[i] - '0';
    }
    printf("%d\n", sum);
    return 0;
}
