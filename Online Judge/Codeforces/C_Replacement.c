/*
https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C
*/

#include <stdio.h>

long long int main(){
    long long int n;
    scanf("%lld", &n);
    long long int a[n];

    for(long long int i=0; i<n; i++){
        scanf("%lld", &a[i]);
    }

    long long int neg=1;
    long long int pos=2;
    long long int x[]={};

    for(long long int i=0; i<n; i++){
        if(a[i] < 0){
            printf("%lld ", x[neg]);
            // break;
        }else if(a[i] > 0){
            printf("%lld ", x[pos]);
        }else{
            printf("0 ");
        }
    }
    return 0;
}