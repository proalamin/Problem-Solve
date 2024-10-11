/*
https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E
*/

#include <stdio.h>
#include<limits.h>


int main(){
    int n;
    scanf("%d", &n);
    int a[n];

    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    int min= INT_MAX;
    int minIndex = -1;


    for(int i=0; i<n; i++){
        if(a[i]<min){
            min=a[i];
            minIndex = i;
        }
    }
    printf("%d ", min);
    printf("%d\n", minIndex+1);


    return 0;
}