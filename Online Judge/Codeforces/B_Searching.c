/*
https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B
*/

#include <stdio.h>

int main(){
    int n, x;
    scanf("%d", &n);
    int a[n];

    for(int i=0; i<n; i++){
        scanf("%lld", &a[i]);
    }

    scanf("%d", &x);

    int position=-1;
    for(int i=0; i<n; i++){
        if(a[i]==x){
            position =i;
            break;
        }
    }
    printf("%d", position);


    return 0;
}