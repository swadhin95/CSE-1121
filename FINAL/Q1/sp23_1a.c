  #include<stdio.h>
  int main()
  {
    int i , j ;

    for (i = 1 ; i <= 4 ; i++){
        for ( j = 1 ; j <= 4 ; j+=2){
            if(i%2){
                printf("special = retake = fail\n");
            }
        }
    }
    return 0;
}

