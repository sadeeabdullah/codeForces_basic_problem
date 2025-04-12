#include<stdio.h>
int main(){
   
        int N ;
        scanf("%d",&N);
        int factorial = 1;
        for (int i = 1; i < N; i++)
        {
            // printf("%d\n",i);
            factorial= N * i;
            printf("%d\n",factorial);

        }
    
    
    return 0;
}