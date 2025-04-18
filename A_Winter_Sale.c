//https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A

#include<stdio.h>
int main(){
    int discount, price_after_discount;
    float  price_bef;
    scanf("%d %d",&discount, &price_after_discount);

    price_bef = (price_after_discount * 100.0)/(100  - discount);
    printf("%.2f",price_bef);
    return 0;
}