/*
https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    long long int a[n];

    for(int i=0; i<n; i++){
        scanf("%lld", &a[i]);
    }

    long long int sum=0;
    for(int i=0; i<n; i++){
        sum =sum+a[i];
    }

    if(sum<0){
        long long int absValue= -1*sum;
        printf("%lld", absValue);
    }else{
        printf("%lld", sum);
    }


    return 0;
}