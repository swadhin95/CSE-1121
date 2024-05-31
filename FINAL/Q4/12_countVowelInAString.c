#include<stdio.h>
#include<string.h>
int main()
{
    int i, c= 0;
    char S[50];
    gets(S);
    for(i = 0; S[i] != '\0'; i++)
    {
        if(S[i] == 'a' || S[i] == 'e' || S[i] == 'i' ||
            S[i] == 'o' || S[i] == 'u' || S[i] == 'A' ||
            S[i] == 'E' || S[i] == 'I' || S[i] == 'O' ||
            S[i] == 'U'){
                c++;
            }

    }
    printf("%d\n", c);
    return 0;
}
