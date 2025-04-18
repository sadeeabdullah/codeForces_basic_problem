//https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/E

#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d",&a, &b);
    if (a == 0 && b  == 0)
    {
        printf("NO");
    }else if (a - b == 1 || a - b == -1 || a - b == 0)
    {
        printf("YES");
    }else{
        printf("NO");
    }
    
    return 0;
}