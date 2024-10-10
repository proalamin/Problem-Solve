/*
https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];

    int possition =sizeof(a) /sizeof(a[0]);

    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for(int i=0; i<n; i++){
        if(a[i]<=10){
        printf("A[%d] = %d\n",i, a[i]);
        }
    }
    


    return 0;
}