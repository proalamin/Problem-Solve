/*
https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S
*/

#include<stdio.h>


int main(){
    int n,m, x;
    scanf("%d %d", &n, &m);

    int arr[n][m];
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d", &x);

    int flag=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==x){
                flag=1;
                break;
            }
        }
        if(flag){
            break;
        }
    }

    if (flag){
        printf("will not take number");
    }
    else{
        printf("will take number");
    }


    return 0;
}