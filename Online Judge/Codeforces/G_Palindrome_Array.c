// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G

#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n], arr2[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0, j=n-1; i<n; i++, j--){
        arr2[j]=arr[i];
    }
    
    int palindrome=1;
    for(int i=0; i<n; i++){
       if(arr[i] != arr2[i]){
        palindrome=0;
        break;
       }

    }

    if(palindrome){
        printf("YES");
       }else{
        printf("NO"); 
       }

    return 0;
}