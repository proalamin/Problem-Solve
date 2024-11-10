/*
https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J
*/

#include<stdio.h>

long long factorial(int n){
    
    if(n==0){
        return 1;
    }

    return n * factorial(n-1);
}

int main(){

    int n;
    scanf("%d", &n);

    long long ans=factorial(n);
    printf("%lld\n", ans);


    return 0;
}