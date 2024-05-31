#include<stdio.h>
int main()
{
    int N, M,  x, flag = 0 ;
    scanf("%d%d", &N, &M);
    int a[N][M];
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d", &x);
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            if(a[i][j] == x)
            {
                flag = 1;
                break;
            }
        }
    }
    if(flag == 1){
        printf("Yes\n");
    }
    else{
       printf("No\n");
    }
    return 0;
}
